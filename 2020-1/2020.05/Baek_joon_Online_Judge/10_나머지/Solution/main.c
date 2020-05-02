#include <stdio.h>
#include <stdlib.h>
int Ten = 10;
int devisor = 42;
int detection = 1004;

int main(void){
  
  int a;
  int b;
  int B;
  int *A = (int*)malloc(sizeof(int)*Ten);
  int count=0;
  
  for (a=0; a<Ten; a++){

   scanf("%d", &A[a]);

  }

  for(a=0; a<Ten; a++){
    
    A[a]=A[a]%devisor;

  }

  for(a=0; a<Ten; a++){
    for(b=a+1; b<Ten; b++){
      if (A[a] == A[b]){
        A[b] = detection;
        detection ++;
      }
    }
  }
  
  for(a=0; a<Ten; a++){
    if (A[a] >= 1004){
      count++;
    }
  }


  printf("%d", Ten-count);
  
  return 0;

}
