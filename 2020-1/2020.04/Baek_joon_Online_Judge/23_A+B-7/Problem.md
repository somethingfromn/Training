#include <stdio.h>

int main(){
    
    int T;
    int count;
    int A;
    int B;
    
    scanf("%d", &T);
    
    for (count = 1; count <= T; count ++){
        scanf("%d", &A);
        scanf("%d", &B);
        printf("Case #%d: %d\n", count, A+B);
    }
   
    return 0;
}
