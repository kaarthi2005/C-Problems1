#include <stdio.h>

int main(){
    int num ;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num >=10 && num<= 20){
        printf("Number is within a Range");
    }
    else{
          printf("Number is not within a Range");
    }



    return 0;
}