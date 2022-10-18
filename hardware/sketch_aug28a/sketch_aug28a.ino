#define ldr_pin 34
#define led_pin 22
void setup(){
  Serial.begin(115200);
  pinMode(ldr_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  digitalWrite(led_pin, HIGH);
}

void loop(){
  int ldr_value;
  ldr_value = analogRead(ldr_pin);
  Serial.println(ldr_value);
  if(ldr_value > 1000){
      digitalWrite(led_pin, LOW);
  }
  else{
      digitalWrite(led_pin, HIGH);  
  }
  delay(100);
}
