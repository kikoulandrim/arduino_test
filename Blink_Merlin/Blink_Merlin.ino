#define rouge 9
#define bleu 10
#define vert 11

#define entree 3

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(vert, OUTPUT);
  pinMode(rouge, OUTPUT);
  pinMode(bleu, OUTPUT);
  pinMode(entree,INPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(rouge, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(vert, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(rouge, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(rouge, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  digitalWrite(vert, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(vert, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
   digitalWrite(rouge, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(rouge, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
