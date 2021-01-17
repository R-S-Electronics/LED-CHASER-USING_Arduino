/*Program for LED Chaser
 * ~~~ R. S. Electronics ~~~
 * https://www.youtube.com/channel/UC_Jm37Vgb58krva8AG1ByMg
 */

int LEDS = { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4 };

void setup() {
  // put your setup code here, to run once:
  for (int led = 0; led < 10; led++)
    pinMode(LEDS[led], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int led = 0; led < 10; led++)
  {
    digitalWrite(LEDS[led], HIGH);
    delay(70);
    digitalWrite (LEDS[led], LOW);
    delay(70);
  }
}
