#include <stdio.h>

int main(){
    int num ;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num >= 100 && num <=999){
        printf("Three-Digit Number");
    }
    else{
        printf("Not a Three-Digit Number");
    }

    return 0;
}