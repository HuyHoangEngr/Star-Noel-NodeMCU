#define A 16 //pin D0
#define B 5 //pin D1
#define C 4 //pin D2
#define D 0 //pin D3

int Y[4]={1,1,1,1};

void setup() {
  Serial.begin(9600);
  // initialize digital pin NOE, A, B, CLK, XUAT, DS as an output.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  digitalWrite(A, Y[0]);   
  digitalWrite(B, Y[1]);
  digitalWrite(C, Y[2]);   
  digitalWrite(D, Y[3]);
}

void resetBienY(){
  for(int i=0;i<4;i=i+1){
    Y[i]=1;
  }
}

void xuatTinhieu(){
  digitalWrite(A, Y[0]);   
  digitalWrite(B, Y[1]);
  digitalWrite(C, Y[2]);   
  digitalWrite(D, Y[3]);
}

void sangTheochieukimdongho(int solan, int thoigianchay){
  for(int vong=0;vong<solan;vong=vong+1){
      for(int i=0;i<4;i=i+1){
        Y[i]=0;
        xuatTinhieu();
        delay(thoigianchay);
      }
      resetBienY();
      xuatTinhieu();
      delay(thoigianchay);
  }
}

void sangNguocchieukimdongho(int solan, int thoigianchay){
  for(int vong=0;vong<solan;vong=vong+1){
      for(int i=0;i<4;i=i+1){
        Y[3-i]=0;
        xuatTinhieu();
        delay(thoigianchay);
      }
      resetBienY();
      xuatTinhieu();
      delay(thoigianchay);
  }
}

void loop() {
//  nhapnhay(5, 2000);
//  sangTheochieukimdongho(5,100);
  sangNguocchieukimdongho(5,200);
}
