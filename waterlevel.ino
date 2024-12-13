void setup() {
    Serial.begin(9600);
    pinMode(4, OUTPUT);
}

void loop() {
    int value = readRainSensor();
    displayRainStatus(value);
}

int readRainSensor() {
    int sensorValue = analogRead(A3);
    Serial.print("Value : ");
    Serial.println(sensorValue);
    return sensorValue;
}

void displayRainStatus(int value) {
    if (value < 300) {
        digitalWrite(4, HIGH);
        Serial.println("Heavy rain  LED on ");
    } else {
        digitalWrite(4, LOW);
    }
}
