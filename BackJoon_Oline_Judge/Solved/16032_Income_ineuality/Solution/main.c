#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int N;
    int i,j;
    int *sum;
    int *count;
    int avg=0;
    

    count = (int*)malloc(sizeof(int)*50000);

    //ininitalize all the array as 0
    for(i=0; i<N; i++) count[i] = 0;
    

    for(j=0; j<50000; j++){
      scanf("%d", &N); 

      if(N==0) break;
    
      sum = (int*)malloc(sizeof(int)*N);
      
      //ininitalize all the array as 0
      for(i=0; i<N; i++) sum[i] = 0;
      
      
      for(i=0; i<N; i++){
          //printf("%d", avg);
          scanf("%d", &sum[i]);
          avg += sum[i];
      }
      avg = avg/N;
      //printf("\nhere:%d\n", avg);
      //get the average
      for(i=0; i<N; i++){
          if(sum[i] <= avg) { count[j]++;}
          //printf("%d",count[j]);
      }
      avg=0;
    }

    j=0;
    //printf("%d", count[j]);
    while(count[j] != 0){
      //printf("here");
      printf("%d\n", count[j]);
      j++;
    }

    return 0;
}