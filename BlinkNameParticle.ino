// SIT210: Embedded Systems Development
// Task 2.1P Particle Programing - First Name Blinky


int led1 = D6; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);   // .-..

}

 
void loop() {
  // To blink the LED, blink your first name in Morse code  (Bandar)
  // B -...   A .-    N -.    D -..   A .-    R .-.
  // let delay (1000) line for long blink and let delay(500) dot a short blink
  
  // B -... 
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000); // We'll leave it on for 1 second...
    
  digitalWrite(led1, LOW); // Then we'll turn it off...
  digitalWrite(led2, LOW);
    delay(500);  // Wait 1/2 second...
  
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    // A .-
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000); 
    
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
    delay(500);  
    
    // N -.
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500); 
    
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
    delay(500);  
    
     // D -..   
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500); 
    
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
    delay(500);  
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500); 
    
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
    delay(500);
    
    // A .-   
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000); 
    
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
    delay(500); 
    
    //  R .-.
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(1000);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
    delay(500);
   
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    delay(500);
    
    
}
