#include <stdio.h>

int SizeOfArray = 1000;

int main(void){

  int C;
  int a;
  int b;
  int c;
  float count;
  float HowMany;
  float scores[SizeOfArray];
  float average[SizeOfArray];
  float PercentOfOverAverage[SizeOfArray];

  scanf("%d", &C);

  for(a=0; a<SizeOfArray; a++){
    scores[a]= 'X';
    average[a]= 'X';
  }
  
  for(a=0; a<C; a++){
    //쓰레기 값이 들어가있는 average의 초기화와 매번 초기화가 필요한 count
    average[a]=0;
    count=0;
    scanf("%f", &HowMany);
    if(HowMany < 1 || HowMany > 1000){
      printf("\nError on inputting the number of cases");
    }
    for(b=0; b<HowMany; b++){
      scanf("%f", &scores[b]);
      if(scores[b] < 0 || scores[b] > 100){
        printf("\nError: Scores should be bigger than or equal to 0 and smaller than or euqal to 100 at the same time");
      }
      //printf("\nscore: %f\n", ArrayOfScores[b]);
      //printf("\nAverage: %f\n", ArrayOfAverage[0]);
      average[a] += scores[b]; 
    }
    //printf("\nAverage: %f\n", ArrayOfAverage[0]);
    average[a] = average[a]/HowMany;
    for(c=0; c<HowMany; c++){
      if(scores[c] > average[a]){
        count ++;
      }
    }
    //printf("\naverage: %f\n", average[a]);
    //printf("\ncount: %f\n", count);
    PercentOfOverAverage[a] = (count/HowMany)*100; 
  }

  for(a=0; a<C; a++){
    printf("%.3f%%\n",PercentOfOverAverage[a]);  
  }


}
