
int yellowled = 12;
int greenled = 10;



void setup() {                
 
  pinMode(yellowled, OUTPUT);   
  pinMode(greenled, OUTPUT);  
    
}


void loop() {
  digitalWrite(yellowled, HIGH);   
  delay(80);                      
  digitalWrite(yellowled, LOW);   
  digitalWrite(greenled, HIGH);    
  delay(80);                      
  digitalWrite(greenled, LOW);         
  delay(80);                      
      
}              
