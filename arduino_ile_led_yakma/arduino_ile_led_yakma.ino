void setup() {
  pinMode(13, OUTPUT); // 13. pini çıkış yap
}

void loop() {
  digitalWrite(13, HIGH); // LED yanar
  delay(1000);            // 1 saniye bekle
  digitalWrite(13, LOW);  // LED söner
  delay(1000);            // 1 saniye bekle
}
