/*
  Este programa faz com que o Arduino monitore a
  Luz do Ambiente e caso ela fique abaixo de um
  limiar de 200, um LED será aceso
*/

  // VALOR MÁXIMO DE LUMINOSIDADE 49
  // VALOR MÍNIMO DE LUMINOSIDADE 969
#define SENSOR_LDR A0
#define LED 2
#define RELE 10

void setup()
{
  Serial.begin(9600);

  pinMode(SENSOR_LDR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(RELE, OUTPUT);
}

void loop()
{
  Serial.print("Luz do Ambiente: ");
  Serial.println(analogRead(SENSOR_LDR));
// se maior que 200 pouca luminosidade
  if (analogRead(A0) > 200) { 
    // desliga relé para continuar corrente no fio negativo
         digitalWrite(RELE, LOW);
    // acende o led do arduino
         digitalWrite(LED, HIGH);
  } else {
    // liga o relé para cortar corrente no fio negativo
         digitalWrite(LED, LOW);
    // desliga o led do arduino
         digitalWrite(RELE, HIGH); 
  }
  delay(10);
}