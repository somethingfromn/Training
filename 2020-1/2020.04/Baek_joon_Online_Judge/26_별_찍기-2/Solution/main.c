#include <stdio.h>

int main(void){
    
    int N;
    int lines;
    int blanks;
    int stars = 1;
 
    scanf("%d", &N);
    
    for (lines = 1; lines <= N; lines ++){
        for(blanks = N; blanks > 0; blanks--){
            if(stars >= blanks){
                printf("*");
            }else{
                printf(" ");}
            
        }
    stars++;
    printf("\n");
    }
    
    
    return 0;
}
