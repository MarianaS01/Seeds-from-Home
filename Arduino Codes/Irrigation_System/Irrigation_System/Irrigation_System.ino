// Indicating pins for the pump and the valve
int pump = 11;
int valve = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(pump, OUTPUT);
  pinMode(valve, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pump, LOW);
  digitalWrite(valve, LOW);
  delay(10000);
  digitalWrite(pump, HIGH);
  digitalWrite(valve, HIGH);
  delay(5000);
  
}
