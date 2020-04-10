#include <stdio.h>

int main(){
    
    int T;
    int count;
    int A;
    int B;
    
    scanf("%d", &T);
    
    for(count = 0; count < T; count ++){
        scanf("%d", &A);
        scanf("%d", &B);
        printf("%d\n", A+B);
    }
    
    
    return 0;
}
