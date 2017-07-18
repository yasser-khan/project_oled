/*
  Lights up all segments of the seven segment display.
  Yasser Khan
  
 */

int controlPins[] = {
  // a 0b c d e f g a 0b c d e f g 
  0b1111111111111111, // all on
  0b1111100010001111, // c
  0b1111100111111001, // a
  0b1000100010001111, // l

}; 

int segmentPins[]= {33, 29, 25, 21, 32, 28, 24, 20, 31, 27, 23, 19, 30, 26, 22, 18};

void setup() {
  // digital pins
  for (int i=2; i <= 55; i++){
      pinMode(i, OUTPUT);
  }
   
   pinMode(A0, OUTPUT);
   pinMode(A1, OUTPUT);
   pinMode(A2, OUTPUT);
   pinMode(A3, OUTPUT);
   pinMode(A4, OUTPUT);
   pinMode(A5, OUTPUT);
   pinMode(A6, OUTPUT);
   pinMode(A7, OUTPUT);
   pinMode(A8, OUTPUT);
   pinMode(A9, OUTPUT);
   pinMode(A10, OUTPUT);
   pinMode(A11, OUTPUT);
   pinMode(A12, OUTPUT);
   pinMode(A13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
             // wait for a second
    for (int i=2; i <= 55; i++){
      digitalWrite(i, LOW);
   }             
   
   digitalWrite(A0, LOW);
   digitalWrite(A1, LOW);
   digitalWrite(A2, LOW);
   digitalWrite(A3, LOW);
   digitalWrite(A4, LOW);
   digitalWrite(A5, LOW);
   digitalWrite(A6, LOW);
   digitalWrite(A7, LOW);
   digitalWrite(A8, LOW);
   digitalWrite(A9, LOW);
   digitalWrite(A10, LOW);
   digitalWrite(A11, LOW);
   
for (int j = 0; j < 4; j++)
{
    for (int i = 0; i < 16; i++)
  {
    // shift 0by 3 0bit and writes the last 0bit to the pin
    
    digitalWrite(segmentPins[i], controlPins[j]>>(i) & 0b0000000000000001);
    Serial.print(controlPins[j]>>(i) & 0b0000000000000001);
    
    
  
   
  }
  delay(1000);
  Serial.print("\n");
  
   
  }
   
   //digitalWrite(12, HIGH);
   



}