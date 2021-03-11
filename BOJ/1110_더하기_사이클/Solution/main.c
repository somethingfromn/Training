#include <stdio.h>

int main(){
    
    int first_num;
    int last_num;
    int num;
    int tens;
    int ones;
    int cycle_clock=0;
    
    scanf("%d", &first_num);
  
    num = first_num;
    
    while (1){

      tens = first_num/10;
      ones = first_num%10;
      last_num = tens + ones;
      cycle_clock = cycle_clock+1;

      first_num = ones*10 + last_num%10;

      if(num == first_num){
        break;
      }

    }
    
    printf("%d\n", cycle_clock);

    return 0;
    
    
}
