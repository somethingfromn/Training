/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

입력의 마지막에는 0 두 개가 들어온다.

출력
각 테스트 케이스마다 A+B를 출력한다.*/

#include <stdio.h>

int main(void){
    
    int A;
    int B;
    
    while (1){
        
        scanf("%d", &A);
        scanf("%d", &B);
        if(A == 0 && B == 0){
            break;
        }
        printf("%d\n", A+B);
    }
    
    return 0;
}
