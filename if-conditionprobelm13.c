#include <stdio.h>

int main (){
    char ch ;
    printf("Enter a Character : ");
    scanf("%c",&ch);


    if(ch >= 'A' && ch <= 'Z'){
        printf("UpperCase Letter.");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("LowerCase Letter.");
    }
    else{
        printf("Not a character.");
    }


    return 0;
}