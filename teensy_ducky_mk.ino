const float Pi = 3.14159;
int last_x, last_y;

void setup() {
  Serial.begin(38400);
  last_x = 0;
  last_y = 0;
  Serial.println("Hello World");
  randomSeed(analogRead(0));
}

void movetoangle(int diameter, float angle) {
    Serial.println(angle);
    float rad = (float)angle * Pi / (float)180;
    Serial.println(rad);
    int x = diameter * cos(rad);
    int y = diameter * sin(rad);
    Serial.print(x);
    Serial.print(",");
    Serial.println(y);
    Mouse.move(last_x - x, last_y - y);
    last_x = x;
    last_y = y;
    delay(4);  
}

void loop() {
  unsigned int i;
  /*for (i=0; i<1000; i++) {
    movetoangle(150, i);
  }

  delay(500);
  */

  /*for(i=0; i<100; i++) {
    Mouse.move(random(256)-128, random(256)-128);
    delay(50);
  }*/
  for(i=0; i<random(50); i++) {
    Mouse.move(random(5)-2, random(5)-2);
    delay(random(50));
  }
  delay(random(1000));
}
