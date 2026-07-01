
int pins[] = {2,3,4,5,6,7,9};

byte numbers[10][7] = {
  {1,1,1,0,1,1,1}, // 0
  {1,0,0,0,1,0,0}, // 1
  {1,1,0,1,0,1,1}, // 2
  {1,1,0,1,1,1,0}, // 3
  {1,0,1,1,1,0,0}, // 4
  {0,1,1,1,1,1,0}, // 5
  {0,1,1,1,1,1,1}, // 6
  {1,1,0,0,1,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,1,1,0}  // 9
};


//a fucntion to display a number
void display_numbers(int n){
  for(int i = 0 ; i < 7 ; i++ )
  digitalWrite(pins[i],numbers[n][i]);
}


void setup() {
  // sets the pinMode from pins to OUTPUT
for(int i = 0 ; i < 7 ; i++){
pinMode(pins[i],OUTPUT );
}

Serial.begin(9600);
Serial.println(" ");
Serial.println("===Beeping countdown Starting===");


//display numbers
int count = 9;
while(count >= 0){
  display_numbers(count);

  if (count==0){
    tone(8,1500,1000);
  } else{
    tone(8,1000,200);
   
  }

  Serial.println("Count: " + String(count));

  delay(1000);
  count-=1;
}
Serial.println("=== Countdown Complete ===");


}
void loop() {
  // put your main code here, to run repeatedly:

}
