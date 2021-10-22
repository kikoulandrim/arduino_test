#define rouge 10
#define vert 11

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(rouge, OUTPUT);
  pinMode(vert, OUTPUT);
 // pinMode(rouge, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 
  deuxpuisvertpuisrouge();
  clignotafond();
  tripleclignotage();
  chaquinsontour();
  chaquinsontour();
  chaquinsontour();
  moitieclignotage();
  vertpuisvertpuisrougepuisrouge();
}



void deuxpuisvertpuisrouge() {
  digitalWrite(rouge, HIGH);  
  digitalWrite(vert, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(rouge, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  digitalWrite(vert, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(rouge, HIGH);
  delay(1000);              // wait for a second
}



void clignotafond() {

  int a = 0;

  do {
  a++;  //incrémente a
    digitalWrite(vert, LOW);
    digitalWrite(rouge, HIGH);
    delay(20);
    digitalWrite(vert, HIGH);
    digitalWrite(rouge, LOW);
    delay(20); 
 
  }
while(a < 200);
}

void tripleclignotage () {
  digitalWrite(rouge, HIGH);  
  digitalWrite(vert, HIGH);
  delay (500);
  digitalWrite(rouge, LOW);  
  digitalWrite(vert, LOW);
  delay (500);
  digitalWrite(rouge, HIGH);  
  digitalWrite(vert, HIGH);
  delay (500);
  digitalWrite(rouge, LOW);  
  digitalWrite(vert, LOW);
  delay (500);
  digitalWrite(rouge, HIGH);  
  digitalWrite(vert, HIGH);
  delay (500);
  digitalWrite(rouge, LOW);  
  digitalWrite(vert, LOW);
  delay (500);
  }

void chaquinsontour() {
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW); 
  digitalWrite(vert, HIGH);
  delay (200);  
  digitalWrite(vert, LOW);  
  }

void  moitieclignotage() {
  digitalWrite(vert, LOW);
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW); 
  delay (200);
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW); 
  delay (200);
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW); 
  }

void   vertpuisvertpuisrougepuisrouge () {
  digitalWrite(vert, HIGH);
  delay (200);  
  digitalWrite(vert, LOW);  
  delay (200);
  digitalWrite(vert, HIGH);
  delay (200);  
  digitalWrite(vert, LOW);  
  delay (200);
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW);
  delay (200); 
  digitalWrite(rouge, HIGH); 
  delay (200);
  digitalWrite(rouge, LOW);
  }