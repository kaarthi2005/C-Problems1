#include <stdio.h>

void offset(char str[]){
    char *p = str;
    for(int i =0; *(p+i) !='\0';i++){
        if(i%2==0){
            printf("%c",*(p+i));
        }
        else{
            printf("*");
        }
    }
}

int main (){
    

    char str[1000];
    fgets(str,sizeof(str),stdin);

    offset(str);

    return 0;
}