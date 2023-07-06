SYSTEM_MODE(MANUAL)
SYSTEM_THREAD(ENABLED)

void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  // while (!Serial.isConnected())
  // {
  // }
}

void loop()
{

  if (Serial.available())
  {
    char value = Serial.read();
    Serial.println(value);
    Serial1.print(value);
  }
  
  if(Serial1.available())
  {
    char blah = Serial1.read();
    Serial.println(blah);
    Serial.print(blah);
  }
  
}
