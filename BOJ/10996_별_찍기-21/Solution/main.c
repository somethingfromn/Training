#include <stdio.h>

int main(void){

int row;
int colunm;
int count;
int temp;




scanf("%d", &count);

temp = count;

for(colunm=0; colunm < count; colunm++)
{
    if (count == 1){
      printf("*");
      break;
    }

  for (row=0; row < temp; row++)
  {
    

    if (row%2 == 0){
      printf("* ");
    }
  }

  printf("\n");

  for(row =0; row <temp; row ++){

    if (row%2 == 0){
      if(row != temp-1){
        printf(" *");
      }
      
    }
  }  
  
  printf("\n");
}


return 0;

}
