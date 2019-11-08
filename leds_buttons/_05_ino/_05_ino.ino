int led = 9; //setando pino 9 p/ inp protoboard
int brightness = 0; //intensidade de inicio
int fadeAmount = 5;//pontos de aplicaçao fade amount no led
void setup(){
  pinMode(led, OUTPUT); //setando o 9 como saida
}
void loop(){
  analogWrite(led, brightness); //define o brilho
  brightness = brightness + fadeAmount; //incrementando p/ o loop seguinte
  if(brightness == 0 || brightness == 255) {
    fadeAmount =- fadeAmount; //se 0 ou 255 reinicia a luz
  }
  delay(21); //21 ms p/ efeito dimer
}



