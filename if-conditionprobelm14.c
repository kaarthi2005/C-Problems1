#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num % 11 ==0){
        printf("%d Divisible by 11",num);
    }
    else{
        printf("%d is not Divisible by 11",num);
    }

    return 0;
}