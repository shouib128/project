#include <dht.h>

// Initialize the DHT11 sensor object
dht DHT;

// Pin connected to DHT11 data pin
#define DHT11_PIN 7

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  Serial.println("DHT11 Temperature and Humidity Sensor");
}

void loop() {
  // Read data from DHT11 sensor
  int chk = DHT.read11(DHT11_PIN);

  // Print temperature and humidity values
  Serial.print("Temperature: ");
  Serial.print(DHT.temperature);
  Serial.print(" °C\t");
  Serial.print("Humidity: ");
  Serial.print(DHT.humidity);
  Serial.println(" %");

  delay(2000); // Wait for 2 seconds before reading again
}