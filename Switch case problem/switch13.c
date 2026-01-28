#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int score;
    scanf("%d",&score);

    switch (n)
    {
    case 1:
        if(score >= 700){
            printf("Approved");
        }
        else if(score >= 650 && score <= 699){
            printf("Manual Review");
        }
        else{
            printf("Rejected");
        }
        break;
     case 2:
        if(score >= 700){
            printf("Approved");
        }
        else{
            printf("Rejected");
        }
        break;
    
    default:
        break;
    }
    return 0;
}