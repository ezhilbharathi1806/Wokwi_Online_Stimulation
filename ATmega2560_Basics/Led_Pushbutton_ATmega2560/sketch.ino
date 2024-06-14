void setup() {
  // put your setup code here, to run once:
  volatile long i;
  volatile char *DDR_F, *DDR_K, x;
  DDR_F = 0x30; DDR_K =0x107;
  *DDR_F = 0x01; *DDR_K = 0x00;
  volatile char *port_f, *ink;
  port_f = 0x31; ink = 0x106;
  while(1){
    x = *ink;
    if((x&0x01) ==0x01){
      *port_f = 0x01;
      for(i=0;i<50000;i++);
    }
    *port_f = 0;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
