const int SWITCH_PIN = 2;
const int SHUTDOWN_BUTTON = 4;
int first_value;
int second_value;


void setup()
{
    pinMode(SWITCH_PIN, INPUT_PULLUP);
    pinMode(SHUTDOWN_BUTTON, OUTPUT);
    digitalWrite(SHUTDOWN_BUTTON, HIGH);
    Serial.begin(9600);
}

void loop()
{
  first_value = digitalRead(SWITCH_PIN);
  delay(25);
  second_value = digitalRead(SWITCH_PIN);
  if (first_value != second_value)
  {
    digitalWrite(SHUTDOWN_BUTTON, LOW);
    delay(200);
    digitalWrite(SHUTDOWN_BUTTON, HIGH);
  }
}
