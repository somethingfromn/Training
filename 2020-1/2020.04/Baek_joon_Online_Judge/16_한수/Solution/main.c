#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int a;
  int count=0;
  int N;
  int* Array;


  scanf("%d", &N);

  if (N<1 || N>1000){
    printf("N should be bigger than 1 and smaller tan 1000");
  }

  Array = (int*)malloc(sizeof(int)*(N+1));
  for (a=0; a<=N; a++){
    if(a == 1000){
      //nothing to do
    }
    else if (a>=100 && a<1000){
      if((a/100)-((a%100)/10) == ((a%100)/10) -((a%100)%10)){
        Array[a] = a;
        count++;
      }
    }else{
      Array[a] = a;
      count++;
    }

  }
  printf("%d",count-1);
  return 0;
}
