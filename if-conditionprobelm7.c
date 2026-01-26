#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);

    if(ch >= '0' && ch <= '9'){
        printf("It is a Digit");
    }
    else if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
        printf("%c is Alphabet",ch);
    }
    else{
        printf("%c is a Special Character",ch);
    }

    return 0;
}