void setup(){
    volatile long i, j;
    volatile char *DDR_F, *DDR_K, *DDR_A, *DDR_C, x;
    volatile char *output_F, *input_K, *output_A, *output_C;  // Row pins is connected to output_F,column is connected to input_K,Led pins is connected to output_A
    DDR_F = 0x30;    DDR_K = 0x107;   DDR_A = 0x21;    DDR_C =0x27;      // Data Direction Register Addresses
    output_F = 0x31; input_K = 0x106; output_A = 0x22; output_C=0x28; //Input and Output_A = Columns, output_C = Rows Addresses
    *DDR_F = 0x0F;   *DDR_K = 0x00;   *DDR_A = 0x0F;   *DDR_C = 0x0F;//setting Port_F pins as output, Port_k as input and Port_A pins as output
    //*output_A = 0x0F;  //Port_A LED testing
    while(1){
        for(i=0; i<4; i++){      //keypad scanning algorithm
            *output_F = 1<<i;
            *output_A = *input_K;
            if(*input_K != 0){
                *output_C = 1 <<i;
                for( i=0; i<50000; i++);
                *output_C =0;
            }
        }
    }
}
void loop() {
  // put your main code here, to run repeatedly:
}
