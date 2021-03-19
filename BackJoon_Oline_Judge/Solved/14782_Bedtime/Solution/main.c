#include <stdio.h>

int main(){

  int num;
  int sum=0;
  int i;

  scanf("%d", &num);

  for (i=1; i<=num; i++){

    if((num%i)==0){
      sum += i;
    }
  }
  printf("%d", sum);

  return 0;
}