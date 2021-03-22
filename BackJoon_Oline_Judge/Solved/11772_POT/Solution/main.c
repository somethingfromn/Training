#include <stdio.h>

int main(){

  int N;
  int Num;
  int Real_Num;
  int Save_Num;
  int Factor;
  int Sum=0;
  int i, j;

  scanf("%d", &N);

  for(i=0; i<N; i++){
    
    scanf("%d", &Num);
    Factor = Num%10;
    Real_Num = Num/10;
    Save_Num = Num/10;
    //printf("%d", factor);

    for(j=0; j<Factor-1; j++){
      
      Real_Num = Real_Num * Save_Num;
      //printf("\n%d\n", Real_Num);
    }
    if(Factor == 0){
      Sum += 1;
    }else{
    //printf(" %d ", Real_Num);
    Sum += Real_Num;
    }
  }

  printf("%d", Sum);

  return 0;
}