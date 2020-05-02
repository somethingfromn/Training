#include <stdio.h>
#include <stdlib.h>


int main(void){

  float N;
  float M;
  int A;
  float* score;
  float SumOfScores;
  
  scanf("%f", &N);

  if (N>1000){
    printf("N should be smaller than and equal to 1000\n");
  }

  score = (float*)malloc(sizeof(float)*N);
  
  // 스코어 정립
  for(A=0; A<N; A++){
    scanf("%f", &score[A]);
    if(A==0){
      M = score[A];
    }else if(score[A]>M){
      M = score[A];
    }
  }

  
  // 새로운 스코어 만들기

  for(A=0; A<N; A++){
    score[A] = (score[A]/M)*100;
    SumOfScores += score[A];
  }

  printf("%f", SumOfScores/N);

  return 0;
}
