#include <stdio.h>

int main(){

  int column;
  int row;
  int star_counter;


  scanf("%d", &star_counter);

  for(column =1; column <= star_counter; column++){

   

    for(row=0; row < column; row++){
      
      printf("*");

      
    }

    

    printf("\n");

  }

 

  for(column =star_counter-1; column > 0; column--){

   

    for(row=column; row > 0; row--){
     
      printf("*");

      
    }

    

    printf("\n");

  }

  return 0;


}
