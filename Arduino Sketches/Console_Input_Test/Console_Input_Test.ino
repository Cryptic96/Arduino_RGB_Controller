const int ledPin =  LED_BUILTIN;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  if(Serial.available() > 0) {
    String str = Serial.readString();
    str.replace("\n", "");
    str.toUpperCase();
    
    if(str.equals("HIGH")) {
      digitalWrite(ledPin, HIGH);
      Serial.println("Led ON");
      
    } else if(str == "LOW") {
      digitalWrite(ledPin, LOW);
      Serial.println("Led OFF");
      
    } else {
      Serial.println("Unknown Command");
      //Serial.println("You typed: '" + str + "'");
    }
  }
}
