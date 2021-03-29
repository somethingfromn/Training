#include <stdio.h>
#define n 5

int main(){
    
    int i;
    int num;
    int sum =0;
    
    for(i=-0; i<n; i++){
        scanf("%d", &num);
        sum += num*num;
    }
    printf("%d", sum%10);
    
    return 0;
}