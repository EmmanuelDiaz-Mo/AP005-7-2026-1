// Define el pin del LED
const int ledPin = 2;

void setup() {
  // Configura el pin como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Enciende el LED
  delay(500);                  // Espera 0.5 segundos (500 ms)
  digitalWrite(ledPin, LOW);   // Apaga el LED
  delay(500);                  // Espera 0.5 segundos (500 ms)
}


//Investigando me dice que asi es para el Esp32
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define LED_PIN GPIO_NUM_2

extern "C" void app_main() {
    // Configura el pin como salida
    gpio_reset_pin(LED_PIN);
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    
    // Bucle infinito
    while(1) {
        gpio_set_level(LED_PIN, 1);  // Enciende
        vTaskDelay(500 / portTICK_PERIOD_MS);  // Espera 500ms
        gpio_set_level(LED_PIN, 0);  // Apaga
        vTaskDelay(500 / portTICK_PERIOD_MS);  // Espera 500ms
    }
}