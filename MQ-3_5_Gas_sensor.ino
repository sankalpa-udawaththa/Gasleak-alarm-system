void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  

}
float val;

void loop() {
  val = analogRead(A0);
  Serial.println(val);

if (val>500){
  digitalWrite(13,HIGH);
}
else{
    digitalWrite(13,LOW);

}
}
