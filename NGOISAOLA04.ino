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
void nhapnhay5lan(int solan, int thoigian){
  for(int i=0; i<solan; i=i+1) {
    digitalWrite(A, HIGH);   
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);   
    digitalWrite(D, HIGH);
    delay(thoigian);
    digitalWrite(A, LOW);   
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);   
    digitalWrite(D, LOW);
    delay(thoigian);
    digitalWrite(A, HIGH);   
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);   
    digitalWrite(D, HIGH);
    delay(thoigian);
  }
  delay(2000); //chuyen hieu ung
}
void sangdantungcanh(int solan, int thoigian){
  for(int i=0;i<solan;i=i+1){
    digitalWrite(A, LOW);
    delay(thoigian);
    digitalWrite(B, LOW);
    delay(thoigian);
    digitalWrite(C, LOW);
    delay(thoigian);
    digitalWrite(D, LOW);
    delay(thoigian);
    digitalWrite(A, HIGH);   
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);   
    digitalWrite(D, HIGH); 
  }
}
void loop() {
//  nhapnhay5lan(5, 2000);
//  nhapnhay5lan(5, 1000);
//  nhapnhay5lan(10, 500);
//  nhapnhay5lan(20, 200);
//  nhapnhay5lan(50, 100);
//  nhapnhay5lan(100, 50);
//  sangdantungcanh(50, 100);
  sangTheochieukimdongho(5,100);
}
