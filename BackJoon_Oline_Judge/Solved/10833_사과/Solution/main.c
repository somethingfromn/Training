#include <stdio.h>

int main(){
    
    int Num_Sch, Num_Stu, Num_App=0;
    int HowManyLeft_App=0;
    int i=0;
    
    scanf("%d", &Num_Sch);
    
    for(i=0; i<Num_Sch; i++){
        scanf("%d", &Num_Stu);
        scanf("%d", &Num_App);
        HowManyLeft_App += Num_App%Num_Stu;
    }
    
    printf("%d", HowManyLeft_App);
    
    return 0;
}