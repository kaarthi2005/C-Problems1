#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    
    int kg;
    printf("Enter a kg : ");
    scanf("%d",&kg);

    int k = 300;

    switch (n)
    {
    case 1:
        if(kg >= 1){
            printf("Free");
        }
       
        break;
    
    case 2:
    
        if(kg >= 3){
            printf("%d",k*(kg-3));
        }
        else{
            printf("Free");
        }
        break;
    
    default:
        break;
    }

    return 0;
}