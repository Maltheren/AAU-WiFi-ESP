#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include "esp_wpa2.h"

class aauwifi{

public:
    bool debug = false;
    void begin(const char* username, const char* password);
    void debug(bool state);

private:
    void debugmessage(String input);
    void debugmessageln(String input);
};

static aauwifi AAUWiFi;