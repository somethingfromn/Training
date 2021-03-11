#include <stdio.h>
#include <string.h>

#define NumOfAlpha 26

int main(void){

  int a;
  int count=0;
  int AsciiFirstNumOfAlpha=97;
  char S;
  char Alpha[NumOfAlpha];
  int Alpha2[NumOfAlpha];
  char Word;

  // 각 배열에 알파벳 넣음
  for(a=0; a<NumOfAlpha; a++){
    
    Alpha[a]= AsciiFirstNumOfAlpha;
    Alpha2[a] = -1;
    AsciiFirstNumOfAlpha++;

  }
  //printf("%c", Alpha[0]);
  while(1){
    scanf("%c", &Word);
    //printf("%c", Word);
    if(Word == '\n'){
      break;
    }

    for(a=0; a<26; a++){
      if(Alpha[a] == Word){
        //printf("%c", Alpha[a]);
        //printf("%c", Word); 
        //printf("%d", count);
        //o가 연속해서 나오는 경우에는 가장 늦게 나온 count를 저장하기 때문, 이미 -1이 아닌 것은 따로 또 구할필요 없다.
        if(Alpha2[a] == -1){
          Alpha2[a] = count;
        }
      }
    }
    count++;
  }
  for(a=0; a<NumOfAlpha; a++){
    printf("%d ", Alpha2[a]);
  }
  return 0;
}
