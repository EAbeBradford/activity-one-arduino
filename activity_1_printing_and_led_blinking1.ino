// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(13, HIGH);
  Serial.println("Powers ON");
  delay(2000); // Wait for 2000 milliseconds
  digitalWrite(13, LOW);
  Serial.println("Powers OFF");

  delay(1000); // Wait for 1000 milliseconds
}