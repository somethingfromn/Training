#include <stdio.h>

int main(void){
    
    int T;
    int count;
    int A;
    int B;
    
    scanf("%d", &T);
    
    for (count=1; count <= T; count++){
        scanf("%d", &A);
        scanf("%d", &B);
        
        printf("Case #%d: %d + %d = %d\n", count, A, B, A+B);
    }

    
    
    return 0; 
}
