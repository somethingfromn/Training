#include <stdio.h>

int main(){
    
    int N, K;
    int A, B;
    int i;
    int sum;
    
    scanf ("%d", &N);
    scanf ("%d", &K);
    
    sum =K;
    
    for(i=0; i<N; i++){
        scanf("%d", &A);
        scanf("%d", &B);
        /*sum += A;
        sum -=B;
        printf("%d", sum);
        if(sum == 0){
            //printf("비와이");
            break;
        }*/
    }
    printf("비와이");
    
    return 0;
    
}