#include <stdio.h>

int main(){
    
    int First, Second, Third=0;
    
    scanf("%d", &Third);
    scanf("%d", &Second);
    
    First = Second+(Second-Third);
    
    printf("%d", First);
    
    return 0;
}