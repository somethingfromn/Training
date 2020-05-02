#include <stdio.h>
#include <stdlib.h>

int MaxDigit = 10;

int main (void){

  int A;
  int B;
  int C;
  int num;
  int divisor=1000000000;
  int count;
  int count2;
  int solution;
  int temp;
  int SaveNum=0;
  int *Array = ((int*)malloc(sizeof(int)*MaxDigit));
  int *SumNum = ((int*)malloc(sizeof(int)*MaxDigit)); 
  int HowManyNums=0;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  num = A*B*C;

  if((A && B && C < 100) || (A && B && C > 1000)){
    printf("A or B or C is over the size");
    return 0;
  }

  for (count=0; count<10; count++){

    if(count == 0){
      Array[count] = (num/divisor);
    }else{
      Array[count] = (num/divisor);
    }

    //처음 그 자리에 0이 아닌 숫자가 들어왔음을 알리는..
    if(Array[count] != 0 ){
      //solution = 1;
      if(SaveNum == 0){
        temp = count;
      }
     // printf("count: %d", count);
      SaveNum++;
    }
    // 그 뒤의 모든 0들은 가져가기로 한다.
    /*if(solution == 1){
      printf("%d\n", Array[count]);
      
    }*/

     
      num = num - (Array[count]*divisor); 
      divisor = divisor/10;

  }
  //printf("temp: %d\n", temp);
  for(count = 0; count<10; count++){

    for(count2 =temp; count2<10; count2++){
   
      if(Array[count2] == count){
        
        SumNum[count] = SumNum[count]+1; 
      }
    }
    printf("%d", SumNum[count]);
    
    if(count != 9){
      printf("\n");
    }
    
  }

  return 0;

}
