#include <stdio.h>

int main(){
    
    int A;
    int Count;

    scanf("%d", &A);
    
    Count = A;
    if(Count == 0){
      
      printf("1");
    
    }else{
      while(Count!=0){
        if (Count==1){
          A = A*1;
        }else{
          A = A*(Count-1);
        }
        Count--;   
      }
      printf("%d", A);
    }


    return 0;
}