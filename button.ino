const byte buttonPin = 3;     
const byte ledPin =  8;   
byte buttonState = 0;

void setup() {    
  pinMode(ledPin, OUTPUT);    
  pinMode(buttonPin, INPUT);     
}

void loop(){  
  stateMachine_loop();  

  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {    
    digitalWrite(ledPin, LOW); 
  }
}

void buttonRead(){
  buttonState = digitalRead(buttonPin);
}

