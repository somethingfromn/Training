#include <stdio.h>

int main(){
    
    int Date_No;
    int Car_No;
    int i;
    int count=0;
    
    scanf("%d", &Date_No);
    
    for (i=0; i<5; i++){
        
        scanf("%d", &Car_No);
        if(Car_No == Date_No) count++;
    }
    
    printf("%d", count);
    
    return 0;
    
}