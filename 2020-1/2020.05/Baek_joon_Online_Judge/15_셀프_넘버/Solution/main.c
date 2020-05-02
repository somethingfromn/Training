#include <stdio.h>
#include <stdlib.h>

#define FixedNumber 10000

int main(void){

  int a;
  int b;
  int n;
  int *Array;
  int *Array2;
  int digits;
  int TenDigits;

  Array = (int*)malloc(sizeof(int)*FixedNumber);
  Array2 = (int*)malloc(sizeof(int)*FixedNumber);

  for(a=0; a<10000; a++){
    Array2[a]= a;
  }

  for (a=0; a<10000; a++)
  {
    if ((a%1000) != a){
      Array[a]= a + (a/1000) + ((a%1000)/100) +(((a%1000)%100)/10)+(((a%1000)%100)%10);
    }else if ((a%100) != a){
      Array[a]= a + (a/100) +((a%100)/10)+((a%100)%10);
    }else if ((a%10) != a){

      Array[a] = a+(a/10)+(a%10);

    }else{
      Array[a] = a+a;
    }
    //printf("\nhere:%d\n", Array[a]);
    //printf("\nhere2:%d\n", a);
    
      for(b=0; b<10000; b++){
        if(Array[a] == Array2[b]){
          Array2[b]='X';
        }
      }
      //printf("%d\n", a);
    }
  
  for(a=0; a<10000; a++){
    if(Array2[a] != 'X'){
      printf("%d\n", Array2[a]);
    }
  }
}
