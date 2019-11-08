const int buttonPin = 2; // o numero do pino do botão
const int ledPin = 13; // o numero do pino do LED
// variaveis que devem mudar:
int buttonState = 0; // variavel para ler o estado do botao
void setup() {
  // inicializa o pino do LED como saida:
  pinMode(ledPin, OUTPUT);
  // inicializa o pino do botao como entrada:
  pinMode(buttonPin, INPUT);
}
void loop(){
  // faz a leitura do valor do botao:
  buttonState = digitalRead(buttonPin);
  // verifica se o botao esta pressionado.
  // em caso positivo, buttonState e HIGH:
  if (buttonState == HIGH) {
  // liga o LED:
  digitalWrite(ledPin, HIGH);
  }
  else {
  // desliga o LED:
  digitalWrite(ledPin, LOW);
  }
}
