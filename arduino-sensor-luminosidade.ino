/*
  Este programa faz com que o Arduino monitore a
  Luz do Ambiente e caso ela fique abaixo de um
  limiar de 200, um LED será aceso
*/

#define SENSOR_LDR A0
#define LED 9

void setup()
{
  Serial.begin(9600);

  pinMode(SENSOR_LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  Serial.print("Luz do Ambiente: ");
  Serial.println(analogRead(SENSOR_LDR));
  // VALOR MÁXIMO DE LUMINOSIDADE 49
  // VALOR MÍNIMO DE LUMINOSIDADE 969
  if (analogRead(A0) < 200) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(10);
}