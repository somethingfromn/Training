#include <stdio.h>


int main(void) {

  int N;
  int a;
  int i;

  scanf("%d", &N);

  int Array[N];
  int Store_Number=0;
  int Max=0;
  int Min=0;

  for (i=0; i<N; i++){
    scanf("%d", &a);

    Array [i] = a;

  }

  Max = Array[0];
  Min = Array[0];

  for (i=0; i<N; i++){

    if (Array[i]>Max){
      Max = Array[i];
    }
    if (Array[i]<Min){
      Min = Array[i];
    }
  }

  printf("%d %d", Min, Max);


  return 0;
}
