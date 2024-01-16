
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"

#define WIFI_NAME "IFCE_Open"
#define WIFI_PASSWORD ""

const int myChannelNumber = 2360314;
const char* myApiKey = "EV169VU84FYJB2I4";
const char* server = "api.thingspeak.com";

WiFiClient client;

int ANALOG_PIN = A0; // Pino analógico NodeMCU
int BOARD_RESOLUTION = 1024 ; // Resolução da placa analógica, por exemplo NodeMCU ESP8266 é de 10 bits (de 0 a 1023)
int val = 0; // Variável para manter o valor

void setup() {
  Serial.begin(9600); // Configurando porta serial (conectato ou não conectado)
  pinMode(ANALOG_PIN, INPUT);

  WiFi.begin(WIFI_NAME, WIFI_PASSWORD);
  Serial.println("---------------------------------------");
  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED) {
    
    Serial.print(".");
    
    delay(500);
  }
  
  Serial.println();
  Serial.print("Conectado IP: ");
  Serial.println(WiFi.localIP());
  Serial.println("---");

  ThingSpeak.begin(client);
}

void loop() {
  float valor = 0;

  valor = analogRead(ANALOG_PIN); // Lendo pino analógico

  ThingSpeak.setField(1, valor);

  int x = ThingSpeak.writeFields(myChannelNumber, myApiKey); //Enviando para o ThingSpeak

  if(x == 200){ //Condição de envio para o ThingSpeak
    Serial.println("Dados Enviados com Sucesso!");
  }else{
    Serial.println("Erro de Envio!" + String(x));
  }
  Serial.println("---------------------------------------");

  Serial.println("Sensor Analógico: " + String(valor));

  delay(300000); // Espera 10 segundos

  if (valor < BOARD_RESOLUTION / 2) { //Condição do sensorLDR (se claro ou escuro)
    Serial.println("Escurecendo...");
  } else {
    Serial.println("Está Claro!");
  }
  Serial.println("---");

  delay(5000); // Espera 05 segundos

}