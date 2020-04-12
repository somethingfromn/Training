//첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
#include <stdio.h>

int main(){
    int A=0;
    int B=0;

    scanf("%d", &A);
    scanf("%d", &B);
    
    if(A>0 && B<10){

    printf("%d", A+B);
    
    }else{
      printf("error");
    }
    
    return 0;
}
