int startValue = 5;

//a function to blink an led for a certain  number of times
void flashled(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);

  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Smart countdown Starting ===");

  int count = startValue;

  while(count >= 1){
    Serial.println("count : " + String(count));
    flashled(count);
    count-=1;
  }

  Serial.println("=== countdown complete === ");
}

void loop() {
  // put your main code here, to run repeatedly:
}

