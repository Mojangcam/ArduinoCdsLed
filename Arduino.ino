#define LED_PIN   6
#define CDS_PIN   A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cdsData = analogRead(A0);
  int mapData = map(cdsData, 0, 700, 255, 0);
  if (mapData < 0){
    mapData = 0;
  }
  analogWrite(LED_PIN, mapData);
  delay(50);
}
