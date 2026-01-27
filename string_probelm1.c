#include <stdio.h>

int main (){
    char string1[100];
    printf("Enter a name : ");
    fgets(string1,sizeof(string1),stdin);

    printf("%s",string1);



    return 0;
}