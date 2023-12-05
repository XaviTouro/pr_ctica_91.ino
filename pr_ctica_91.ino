/******************************************************************************
*  Este e un programa para o uso de saídas dixitais en arduino
*  Texto para encendido led conectado ao pin 13 10 segundos e apagado 4 segundos.
*   Autor: Javier Figueiro
*   Data: 05/12/2023
******************************************************************************/  
  // C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
