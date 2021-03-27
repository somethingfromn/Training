#include <stdio.h>
#define NumOfSubj 4

int main(){
    
    int Min_Score;
    int Man_Score;
    int Min_Sum=0;
    int Man_Sum=0;
    int i;
    
    for(i=0; i<NumOfSubj; i++){
        scanf("%d", &Min_Score);
        Min_Sum += Min_Score;
    }
    
    for(i=0; i<NumOfSubj; i++){
        scanf("%d", &Man_Score);
        Man_Sum += Man_Score;
    }
    
    if (Min_Sum >= Man_Sum){
        printf("%d", Min_Sum);
    }else{
        printf("%d", Man_Sum);
    }
    
    return 0;
}