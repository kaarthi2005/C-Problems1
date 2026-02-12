#include <stdio.h>
#include <string.h>

void copy(char str[],char str1[]){
   
    char *p = str;
    char *a = str1;
    int length = strlen(str)-1;
    
    for(int i =0;i<=length ;i++){
        *(a+i) = *(p+i);
    }
    
    for(int i=0 ; i<length ;i++){
        printf("%c",*(a+i));
    }
}


int main (){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char str1[100];
    copy(str,str1);
    return 0;
}