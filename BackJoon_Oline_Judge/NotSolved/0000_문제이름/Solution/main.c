#include <stdio.h>
#include<math.h>

int main(){

  float A, B =0;
  float i;
  float M;
  float Value=1;

  scanf("%f", &A);
  scanf("%f", &B);

  M = (B-A)/400;
  
  Value = pow(10, M);

  printf("%f", 1/(Value+1));

  return 0;
}