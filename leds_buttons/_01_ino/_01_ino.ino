int led = 13; //aponta o barramento 13 de saida 


void setup() {                
  pinMode(led, OUTPUT);     //func define o led como saida
}

void loop() {
  /*digitalWrite(led, HIGH);   //Liga o led com 5 volts
  delay(1000);               // tempo em ms
  digitalWrite(led, LOW);    // desliga o led 
  delay(1000);   */            // tempo em ms 
  /*exe01-1 alterar o clock pra 3 seg 
  digitalWrite(led, HIGH);   //Liga o led com 5 volts
  delay(3000);               // tempo em ms
  digitalWrite(led, LOW);    // desliga o led 
  delay(3000);  // tempo em ms 
  exe 01-2 clock 200ms e 500ms
  */
  digitalWrite(led, HIGH);   //Liga o led com 5 volts
  delay(200);               // tempo em ms
  digitalWrite(led, LOW);    // desliga o led 
  delay(300);               // tempo em ms 
  
  
}
