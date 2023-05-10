#define WATER     A0
float water;
void setup() {
  // put your setup code here, to run once:
  pinMode(WATER, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  water = getWaterLevel();
  Serial.print("water level = ");
  Serial.println(water);
  delay(1000); 

}

// Function used to get the water level
float getWaterLevel()
{
  return analogRead(WATER);
}
