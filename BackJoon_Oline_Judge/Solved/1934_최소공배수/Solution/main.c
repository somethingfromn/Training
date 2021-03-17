#include <stdio.h>
#include <stdlib.h>

int LCD (int Num1, int Num2);

int main(){
  
  int Num1, Num2;
  int HowMany=0;
  int i=0;
  int *GCM;
  
  scanf("%d", &HowMany);

   GCM = malloc(sizeof(int) * HowMany);

  for(i=0; i<HowMany; i++){

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    
    GCM[i] = LCD(Num1, Num2);
  }
  
  for(i=0; i<HowMany; i++){
    printf("%d\n", GCM[i]);
  }
    free(GCM);

}

int LCD(int num1, int num2){
    //printf("%d", num1);
    int Num1 = num1;
    int Num2 = num2;
    int LCD=1; //Least Common Divisor: 최소 공약수
    int check=0;
    int S_Num;
    int i=2;
    int j=0;
    int k=0;
    int *numPtr = malloc(sizeof(int) * 45000); 
   
    //작은 값 찾기 
    if(Num1 > Num2){
        S_Num = Num2;
    }else if (Num1 == 1 && Num2 == 1){
        check = 2;
    }else if(Num1 == Num2){
        S_Num = Num1;
        check = 1;
    }
    else{
        S_Num = Num1;
    }
  
        //배열 안 값 초기화
    for(k=0; k<45000; k++){
        numPtr[k]= 0;
    }

    while(i<=S_Num){
        //디버깅: printf("%d", Num1);
        if(Num1%i==0 && Num2%i == 0){
            Num1 = Num1/i;
            Num2 = Num2/i;
            //디버깅: printf("%d", Num1);
            numPtr[j]= i;
            i=2; //초기화
            j++;
            //printf("here");
        }else{
          i++;
        }
       
    }

    for(i=0; i<45000; i++){
        if(numPtr[i] != 0){
          //디버깅: printf("here");
            LCD *= numPtr[i];
        }
    }
    free(numPtr);
    //디버깅: printf("%d", numPtr[0]);
    //디버깅: printf("%d\n", LCD*Num1*Num2);
    if(check == 1){
      return S_Num;
    }else if(check ==2){
      return 1;
    }else{
      //printf("here");
      //printf("%d %d %d", LCD, Num1, Num2);
      return LCD*Num1*Num2;
    }
}