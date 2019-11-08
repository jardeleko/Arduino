// aponta saida no pino 5
int led = 5;

void setup() {
  // Inicializa a saida passando o pino 5 
  pinMode(led, OUTPUT);
}
// A funcao loop() continua executando enquanto o Arduino estiver alimentado,
// ou ate que o botao reset seja acionado.
void loop() {
  digitalWrite(led, HIGH); // Acende o LED
  delay(2000); // Aguarda um segundo (2s = 1000ms)
  digitalWrite(led, LOW); // Apaga o LED
  delay(1000); // Aguarda um segundo (1s = 1000ms)
}
