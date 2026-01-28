#include <stdio.h>

int main (){
    printf("type1 to silver ticket or type2 to Gold ticket : ");
    int n ;
    scanf("%d\n",&n);


    printf("Enter your show time : ");
    int time ;
    scanf("%d",&time);

    int silver = 150;
    int Gold = 250;

    switch (n)
    {
    case 1:
        if(time >= 18){
            printf("%d",silver+50);
        }
        else{
            printf("%d",silver);
        }
        break;
    case 2:
        if(time >= 18){
            printf("%d",Gold+50);
        }
        else{
            printf("%d",Gold);
        }
        break;
    
    default:
        break;
    }

    

    return 0;
}