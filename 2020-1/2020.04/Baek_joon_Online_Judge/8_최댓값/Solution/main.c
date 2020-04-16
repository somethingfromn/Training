#include <stdio.h>
#include <stdlib.h>

int SizeOfArray = 9;


int main(void){

  //number should natural number
  int *number = (int*)malloc(sizeof(int)*SizeOfArray);
  int MaxNum;
  int CheckPosition;
  int count;
  // for finding max number and arrange the numbers
  for(count =0; count < SizeOfArray; count++){
  
    scanf("%d", &number[count]);
    
    if (count == 0){
      MaxNum = number[count];
    }

    if (MaxNum < number[count]){
      MaxNum = number[count];
      CheckPosition = count-1;
      
    }
  }
  
  for (count =0; count < SizeOfArray; count++){

    if(MaxNum<number[count]){
      CheckPosition++;
    }
  }
  
  printf("%d\n", MaxNum);
  printf("%d", count);

  free (number);

  return 0;
}
