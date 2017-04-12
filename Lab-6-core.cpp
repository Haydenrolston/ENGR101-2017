#include <stdio.h>
#include <time.h>
#inclue <E101.h>
int main (){
          init();

int average_adc_reading(int mean){
      int adc_reading;
          int sum = 0;
          int mean;
                  
          for(int i=1;i<5; i++){
          adc_reading = read_analog(0);
          printf(" i=%d adc_reading=%d\n",i,adc_reading);
          sum = sum + adc_reading;
          mean = sum/i;
          }
      printf("Mean ADC reading is: %d\n", mean);
      sleep1(1,0);
}
int drive_forward(int duration){
      set_motor(1, 255);
      sleep1(0,500000);
      set_motor(2, 255);
      sleep1(0,500000);
      stop(1);
      stop(2);
}
int turn_left(int duration){
      set_motor(1, -255);
      sleep1(0,500000);
      set_motor(2, 255);
      sleep1(0,500000);
      stop(1);
      stop(2);
}
int turn_right(int duration){
      set_motor(1, 255);
      sleep1(0,500000);
      set_motor(2, -255);
      sleep1(0,500000);
      stop(1);
      stop(2);
}
int reverse_slow(int duration){
      set_motor(1, -127);
      sleep1(0,500000)
      set_motor(2, -127);
      sleep1(0,500000);
      stop(1);
      stop(2);
}
int reverse_slow_react(int duration){
      int adc_reading;
      adc_reading = read_analog(0);
      if (adc_reading < 5){
              set_motor(1, -127);
              sleep1(0,500000)
              set_motor(2, -127);
              sleep1(0,500000);
              stop(1);
              stop(2);
     }
}
return 0;
}
