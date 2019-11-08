const int buttonPin = 2; // seta o pino entrada protoboard
const int ledPin = 13; // seta o LED no arduino

int buttonPushCounter = 0; // contador de clicks
int buttonState = 0; // atual estado do botao
int lastButtonState = 0; // anterior estado do botao

void setup() {

  pinMode(buttonPin, INPUT); // inicializa a entrada do circuito entrada
  pinMode(ledPin, OUTPUT); // inicializa o pino com a saida
  Serial.begin(9600); // inicializa a comunicacao serial
}
void loop() {
  // faz a leitura do valor do botao:
  buttonState = digitalRead(buttonPin);
  // compara o estado atual do botao com seu estado anterior
  if (buttonState != lastButtonState) {
  // se o estado do botao foi alterado, incrementar o contador
  if (buttonState == HIGH) {
  buttonPushCounter++;
  Serial.print("numero de pulsos: ");
  Serial.println(buttonPushCounter);
  }
}
// salva o estado atual do botao como ultimo estado para iniciar o
// proximo loop
  lastButtonState = buttonState;
// Liga o LED cada 4 pulsacoes checando o modulo de contador de botao
  if (buttonPushCounter % 4 == 0) {
    digitalWrite(ledPin, HIGH);
  }else {
  digitalWrite(ledPin, LOW);
  }
}
