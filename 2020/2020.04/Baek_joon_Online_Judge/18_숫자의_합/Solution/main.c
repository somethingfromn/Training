#include <stdio.h>

int main(void){

  int a;
  int N;
  int num;
  int sum=0;

  scanf("%d", &N);

  if (N<1 || N>100){
    printf("N should be bigger than 1 and smaller than 100");
  }
  
  //서식문자를 활용한 방법
  for(a=0; a<N; a++){
    //입력을 받고 scanf는 커서를 중점으로 %1d 이기 때문에 1번씩 커서가 이동하면서
    //읽게 되어있음, 즉 %d 면 전체를 읽으나, %1d면 숫자 한개씩 읽음 
    scanf("%1d", &num);
    
    sum += num;
  }

  printf("%d", sum);


  return 0;
}
