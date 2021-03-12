#include <stdio.h>

int main(){
    
    int Price;
    int TotalPrice;
    int FirstPrice;
    int Count;
    
    scanf("%d",&TotalPrice);
    for(Count=0; Count<9; Count++){
        scanf("%d", &Price);
        TotalPrice = TotalPrice - Price;
    }
    FirstPrice = TotalPrice;
    printf("%d", TotalPrice);
    return 0;
}