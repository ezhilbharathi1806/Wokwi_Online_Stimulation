void setup() {
  // put your setup code here, to run once:
  volatile char *DDR;
  DDR = 0x30;
  *DDR = 0xFF;
}

void loop() {
  // put your main code here, to run repeatedly:
  volatile  char *out;
  out = 0x31;
  //*out =0x0f;
  *out = 255;
}
