#include <stdio.h>

int main(){

  int column;
  int row;
  int star_counter;

  scanf("%d", &star_counter);

  for(row=star_counter; row >0; row--){


    for(column = row; column < star_counter; column++){

      printf(" ");

    }

    for(column = (row*2)-1; column>0; column--){

      printf("*");

    }
    if(row != 1){
      printf("\n");
    }
  }
  

  for(row=0; row <= star_counter; row++){

    if(row !=1){
      
      for(column = row; column < star_counter; column++){
        if(row ==0){
          break;
        }
        printf(" ");

      }
    
      for(column = (row*2)-1; column>0; column--){
      
        printf("*");
    

      }
    
    
      printf("\n");
    
    }
  }



  return 0;


}
