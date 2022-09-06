// Documentation : 
// Name : Yohjit Chopra
// ROll No. 2110994798


#define dot_delay 300
#define dash_delay 900
#define alphabet 300
#define next_alphabet 900




void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // display Yohjit
  Y();
  delay(next_alphabet);
  O();
  delay(next_alphabet);
  H();
  delay(next_alphabet);
  J();
  delay(next_alphabet);
  I();
  delay(next_alphabet);
  T();
  delay(next_alphabet);

}


void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_delay);
  digitalWrite(LED_BUILTIN, LOW);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dash_delay);
  digitalWrite(LED_BUILTIN, LOW);
}

void Y()
{
  dash();
  delay(alphabet);
  dot();
  delay(alphabet);
  dash();
  delay(alphabet);
  dash();


}

void O()
{
  dash();
  delay(alphabet);
  dash();
  delay(alphabet);
  dash();
}

void H()
{
  dot();
  delay(alphabet);
  dot();
  delay(alphabet);
  dot();
  delay(alphabet);
  dot();
}

void J()
{
  dot();
  delay(alphabet);
  dash();
  delay(alphabet);
  dash();
  delay(alphabet);
  dash();
}



void I()
{
  dot();
  delay(alphabet);
  dot();
}

void T()
{
  dash();
}
