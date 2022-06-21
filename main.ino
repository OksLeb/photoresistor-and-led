#define LED 11
#define PhotoResistor A5


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PhotoResistor, INPUT);
}

void loop()
{
  int voltage = analogRead(PhotoResistor);
  analogWrite(LED, map(voltage, 0, 1023, 255, 0));
}
