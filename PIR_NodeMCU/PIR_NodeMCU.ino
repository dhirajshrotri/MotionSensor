int Status = 12;  // Digital pin D6

int sensor = 13;  // Digital pin D7

void setup()
{
  int Status = 12;  // Digital pin D6

  int sensor = 13;  // Digital pin D7
  Serial.begin(115200);
  Serial.println("Start");
}

void loop(){
  long state = digitalRead(sensor);
    if(state == HIGH) {
      digitalWrite (Status, HIGH);
      Serial.println("Motion detected!");
      delay(1000);
    }
    else {
      digitalWrite (Status, LOW);
      Serial.println("Motion absent!");
      delay(1000);
      }
}

