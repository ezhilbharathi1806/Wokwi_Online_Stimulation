void init_port(void);
void output(char);
char input(void);

void init_port(){
  volatile char  *dir_portf = (char *)0x30;
  *dir_portf = 0xFF;
}

void output(char out){
  volatile char *data_portf = (char *)0x31;
  *data_portf = out;
}