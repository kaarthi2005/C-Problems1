#include <stdio.h>

int main (){

    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);

    if(age>=18){
        printf("Ready to Vote.");
    }
    else{
        printf("Not Ready to vote.");
    }


    return 0;
}