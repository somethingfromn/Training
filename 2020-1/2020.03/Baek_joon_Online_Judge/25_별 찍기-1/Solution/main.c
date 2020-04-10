#include <stdio.h>

int main(void){
    
    int N;
    int stars;
    int lines;
    
    scanf("%d", &N);
    
    for(lines = 1; lines <= N; lines++){
        for(stars = 1; stars <= lines; stars++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
