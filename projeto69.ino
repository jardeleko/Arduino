/*******************************************************************************
*
*             Projeto 69 - Usando uma matriz de leds - código otimizado
*             Autor: Angelo Luis Ferreira
*             Referência: Blog MasterWalker Shop
*             Data: 31/10/2019 (dd/mm/AA)
*                  http://squids.com.br/arduino
*
*******************************************************************************/
#include "alfa.h" // incluimos a biblioteca alfa.h

int linhas[8] = {13, 8, 17, 10, 5, 16, 4, 14}; // Pinos que controlam as linhas
int colunas[8] = {9, 3, 2, 12, 15, 11, 7, 6}; // 14 corresponde ao A0 e 15 corresponde ao A1
 
char msg[] = "PROJETOS SQUIDS ARDUINO.";    // Coloque qualquer frase aqui

byte timecount = 40; //altere para aumentar ou diminuir a velocidade de exibição
int charachter; 

//  CATODO COMUM - LINHA | ANODO COMUM - COLUNA
byte ON = 1, OFF = 0;
// ANODO COMUM - LINHA | CATODO COMUM - COLUNA
//byte ON = 0, OFF = 1;

void setup() {
  for (int i = 2; i < 18; i++) { // Vai de 2 até 17 definindo os pinos como saida
    pinMode(i, OUTPUT);;
  }
}

void loop() { 
    for (byte i = 0; i < sizeof(msg) - 1; i++) {
      getChar(msg[i]);
      for (byte a =0; a<=timecount; a++) {      
      drawScreen(charachter);    
      }
   }
   delay(2000);  // espera 2 segundo
}   

void  drawScreen(int buffer[]) { 
   // Turn on each row in series
    for (byte i = 0; i < 8; i++) {     // conta a próxima coluna
        digitalWrite(linhas[i], OFF);    // liga linhas
        
        for (byte a = 0; a < 8; a++) {   // conta a próxima coluna de 0 a 8         
          // if You set (~buffer[i] >> a) quando querer utilizar invertido
          digitalWrite(colunas[a], (buffer[i] >> 7-a) & 0x01); // cruza linha com coluna
          
          delayMicroseconds(200);       // teste valores - depende de cada componente
          
          digitalWrite(colunas[a], OFF);      // limpa colunas
        }
        digitalWrite(linhas[i], ON);     // limpa linhas
        // otherwise last row will intersect with next row        
    }
}

void getChar(char msgChar) {
 switch(msgChar){
  case 'F': charachter = F; break;
  case 'O': charachter = O; break;
  case 'R': charachter = R; break;
  case 'A': charachter = A; break;
  case 'B': charachter = B; break;
  case 'O': charachter = O; break;
  case 'L': charachter = L; break;
  case 'S': charachter = S; break;
  case 'O': charachter = O; break;
  case 'N': charachter = N; break;
  case 'A': charachter = A; break;
  case 'R': charachter = R; break;
  case 'O': charachter = O; break; 
  }
}
