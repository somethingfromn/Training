#include <stdio.h>

int main(){

  int price;
  int drink_price=0;
  int burger_price=0;
  int set_price;
  int count;


  for(count=0; count<3; count++){


    scanf("%d", &price);
    
    if(count == 0){
      burger_price = price;
    }

    if(burger_price > price){

      burger_price = price;

    }
  }

  for(count =0; count<2; count++){
    
    scanf("%d", &price);

    if(count == 0){
      drink_price = price;
    }

    if(drink_price > price){
      
      drink_price = price;

    }

  }

  set_price = burger_price + drink_price -50;

  printf("%d", set_price);



  return 0;






  


}
