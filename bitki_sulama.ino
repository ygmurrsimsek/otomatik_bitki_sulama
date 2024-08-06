const int soil = A0;       // soil pin
const int water_pin = 8;   //IN1
const int water_pin2 = 9;  //IN2
int soil_deger;            // toprak değerini ölçmek için

void setup() {
  Serial.begin(9600);
  pinMode(water_pin, OUTPUT);
  pinMode(water_pin2, OUTPUT);
  //pinMode(trig, OUTPUT);
  //pinMode(echo, INPUT);
}

void loop() {
  soil_deger = analogRead(soil);
  Serial.print("Toprak Nem Degeri:");
  Serial.println(soil_deger);

  if (soil_deger <400) {
    digitalWrite(water_pin, HIGH);
    digitalWrite(water_pin2, LOW);

  } else {
    digitalWrite(water_pin, LOW);
    digitalWrite(water_pin2, LOW);
  }
  delay(1000);
}
