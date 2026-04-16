
int led = 9;
int brightness = 0;
int fadeamount =5;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeamount;
  if (brightness == 0 || brightness == 255)
    {
      fadeamount= -fadeamount;
    }
    delay(20);
}
