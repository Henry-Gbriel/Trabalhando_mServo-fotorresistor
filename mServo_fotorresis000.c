#include <Servo.h> //Biblioteca para o servo motor 


#define LUM A0 //Defindo o pino do fotorresistor 

//Definição das devidas posições 
#define pos00 90
#define pos01 70
#define pos02 40 


Servo mservo; //Objeto para controlar movimento 
int pos; //Variavel para controlar o movimento 


void setup()
{
  pinMode(LUM, INPUT); //Entrada de informação 
  mservo.attach(2); //Sinal está na porta 6 do ARDUINO 
  mservo.write(0); //Posição inicial 
}

void loop()
{
  if(analogRead(LUM) > 600){
    
    mservo.write(pos00);
    
  }else if(analogRead(LUM) > 400){
    
    mservo.write(pos02);
  }else{
  	
    mservo.write(pos01);
  }
}