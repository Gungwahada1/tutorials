const int buttonPin = 2;   // Pin yang terhubung ke button
const int ledPin = 13;     // Pin yang terhubung ke LED
int buttonState = 0;       // Variabel untuk menyimpan status button

void setup() {
  pinMode(buttonPin, INPUT);  // Inisialisasi button sebagai input
  pinMode(ledPin, OUTPUT);  // Inisialisasi LED sebagai output
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Membaca status tombol
  if (buttonState == LOW) {             // Jika tombol ditekan
    digitalWrite(ledPin, LOW);         // Nyalakan LED
  } else {
    digitalWrite(ledPin, HIGH);          // Matikan LED
  }
}
