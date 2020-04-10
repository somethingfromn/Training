#include <stdio.h>

int main(void){

  int N;
  int count;
  int X;
  int number;

  scanf("%d", &N);
  scanf("%d", &X);

  for(count = 1; count <= N; count++){
    
    scanf("%d", &number);

    if(number<X){
    printf("%d ", number);}

  }


  return 0;
}
