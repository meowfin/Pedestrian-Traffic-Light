
// LED Pedestrian 
int pMerah = 2;
int pHijau = 3;

// LED Traffic Light
int ledMerah = 4;
int ledKuning = 5;
int ledHijau = 6;

// button
int button = 9;

bool buttonState = false;

void setup(){
  pinMode(pMerah, OUTPUT);
  pinMode(pHijau, OUTPUT);
  
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
  
  pinMode(button, INPUT);
  
  // kondisi awal
  digitalWrite(pMerah, HIGH);
  digitalWrite(pHijau, LOW);
  
  digitalWrite(ledMerah, LOW);
  digitalWrite(ledKuning, LOW);
  digitalWrite(ledHijau, HIGH);
}

void loop(){
  
  if(digitalRead(button) == 1 && !buttonState){  
    buttonState = true;
    
    digitalWrite(ledHijau, LOW);
    digitalWrite(ledMerah, HIGH);
    
    digitalWrite(pMerah, LOW);
    digitalWrite(pHijau, HIGH);
    
    delay(5000);
    
    digitalWrite(pHijau, LOW);
    digitalWrite(pMerah, HIGH);
    
    digitalWrite(ledMerah, LOW);
    
    for(int i = 0; i < 5; i++){
      digitalWrite(ledKuning, HIGH);
      delay(500);
      digitalWrite(ledKuning, LOW);
      delay(500);
    }
    digitalWrite(ledHijau, HIGH);
    
    buttonState = false;
  
  }
  
}
