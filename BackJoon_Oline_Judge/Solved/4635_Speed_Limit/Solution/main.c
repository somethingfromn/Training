#include <stdio.h>
#include <stdlib.h>

int main(){

  int speed;
  int hour;
  int pre_hour=0;
  int HowMany;
  int mile=0;
  int*miles;
  int i, j=0;

  miles = (int *)malloc(sizeof(int) * 90); 

  for(i=0; i<90; i++){
    miles[i]=0;
  }

  while(1){
    
    scanf("%d", &HowMany);

    if (HowMany == -1){
      break;
    }else{
      for(i=0; i<HowMany; i++){
        
        scanf("%d", &speed);
        scanf("%d", &hour);
        hour = hour - pre_hour;
        pre_hour += hour;
        mile += speed*hour;
      
      }
      miles[j] = mile;
      mile=0;
      pre_hour = 0;
      j++;
    } 
  }

  for(i=0; i<90; i++){
    if(miles[i] != 0) printf("%d miles\n", miles[i]);
  }
}