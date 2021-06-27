int m1 = 2;
int m2 = 3;
int m3 = 6;
int m4 = 7;
float En1 = 9 ;
float En3 = 11 ;
float pot = A0; 
float speeed ;
float sped; 
int slide = 12 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  speeed = analogRead(pot);
  sped = speeed * 255/675;
  analogWrite(En1,sped);
  analogWrite(En3,sped);
  
 
  
  
 if (digitalRead(slide)== HIGH){
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
  
  } 
  else if(digitalRead(slide)==LOW){
     digitalWrite(m1,LOW);
     digitalWrite(m2,HIGH);
     digitalWrite(m3,LOW);
     digitalWrite(m4,HIGH);
  }


}
