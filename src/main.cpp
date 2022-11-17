#include <Arduino.h>

byte portaLDR = A3;
byte saidaLed = 7;

int valor_ldr = 0;

long time = 0;

void setup()
{
  Serial.begin(9600);

  Serial.println("Inicializando...");

  pinMode(portaLDR, INPUT);

  pinMode(saidaLed, OUTPUT);
}

void loop()
{
  valor_ldr = analogRead(portaLDR);

  Serial.println(valor_ldr);
  delay(2000);

  if (valor_ldr <= 300)
  {
    digitalWrite(saidaLed, HIGH);
  }

  if (valor_ldr > 300)
  {
    digitalWrite(saidaLed, LOW);
  }
}