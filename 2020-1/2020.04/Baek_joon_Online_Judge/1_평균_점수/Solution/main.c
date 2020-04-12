#include <stdio.h>

int main(){

  int score;
  int final_score=0;
  int count;

  for (count=0; count <5; count++){

    scanf("%d", &score);
    

    if (score < 40){
      score = 40;
    }

    final_score = final_score + score;


  }

  printf("%d", final_score/5);




  return 0;
}
