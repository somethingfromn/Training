/*문제
세 정수 A, B, C가 주어진다. 이때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)

출력
두 번째로 큰 정수를 출력한다.*/

#include <stdio.h>

int main(){
    
    int A;
    int B;
    int C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    if (A>B){
        if(B>C){
            printf("%d", B);
        }else{
          if(A>C){
            printf("%d", C);
          }else{
            printf("%d", A);
          }
        }
    }else{
        if (A>C){
            printf("%d", A);
        }else{
          if(B>C){
            printf("%d", C);
          }else{
            printf("%d", B);
          }
        }
    }
            
     return 0;
    
}
