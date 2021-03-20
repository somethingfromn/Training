#include <stdio.h>

int main(){

  int C, B, P;
  int Order_C, Order_B, Order_P;
  int Sum=0;

  scanf("%d", &C);
  scanf("%d", &B);
  scanf("%d", &P);

  scanf("%d", &Order_C);
  scanf("%d", &Order_B);
  scanf("%d", &Order_P);

  if (Order_C > C){
    Sum += Order_C - C;
  }
  if (Order_B > B){
    Sum += Order_B - B;
    //printf("%d", Sum);
  }
  if (Order_P > P){
    Sum += Order_P - P;
  }

  printf("%d", Sum);

  return 0;
}