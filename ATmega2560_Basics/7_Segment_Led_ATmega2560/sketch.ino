#include "ecen.h"

void setup() {
  init_port();

}

void loop() {
  // char c;
  // volatile long i;
  // for(c=0 ; c <= 7; c++){
  //   output(1 << c);              // leftshift operator
  //   for(i = 0 ; i<60000 ; i++);  //delay
  // }
  // for(c=7 ; c >=0; c--){
  //   output(1 << c);              // Rightshift operator
  //   for(i = 0 ; i<60000 ; i++);  //delay
  // }
  output(0x7f); 
}
