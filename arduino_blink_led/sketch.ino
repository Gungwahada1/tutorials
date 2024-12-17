const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT); // Atur pin ledPin sebagai output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Nyalakan LED
  delay(1000);           // Tunggu 1 detik
  digitalWrite(ledPin, LOW);  // Matikan LED
  delay(1000);           // Tunggu 1 detik
}

/*====================
Atau Bisa Juga Seperti Dibawah Ini...
====================*/

// void setup() {
//   pinMode(LED_BUILTIN, OUTPUT); // Atur pin LED_BUILTIN sebagai output
// }

// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH); // Nyalakan LED
//   delay(1000);           // Tunggu 1 detik
//   digitalWrite(LED_BUILTIN, LOW);  // Matikan LED
//   delay(1000);           // Tunggu 1 detik
// }
