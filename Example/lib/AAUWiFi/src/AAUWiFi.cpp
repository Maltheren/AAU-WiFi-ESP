#include <AAUWiFi.h>
const char* ssid = "eduroam-2.4Ghz"; // ssid

void aauwifi::begin(const char* username, const char* password){
    debugmessage(F("Connecting to: "));
    debugmessageln(ssid); //printer lige ssid'en for det netværk den prøver at hoppe på
    WiFi.disconnect(true);  //Hvis vi er på noget net alllerede så smite'er vi den lige
    WiFi.begin(ssid, WPA2_AUTH_PEAP, username, username, password); // Bruger WPA2 til at forbinde.
    while (WiFi.status() != WL_CONNECTED) { //venter på WiFi kører
        delay(500); 
        Serial.print(F("."));
    }
    debugmessageln(""); //plopper en ny linje på serial
    debugmessageln(F("WiFi is connected!"));
    debugmessageln(F("IP address set: "));
    if(debug){
        Serial.println(WiFi.localIP());
    }
}

void aauwifi::debugmessage(String input){
    if(debug){
        Serial.print(input);
    }
}
void aauwifi::debugmessageln(String input){
    if(debug){
        debugmessage(input);
        Serial.println();
    }
}

