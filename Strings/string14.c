#include <stdio.h>

#include <string.h>

int main (){

    char str[1000];
    fgets(str,sizeof(str),stdin);

    int n= strlen(str);
    char str1[1000];

    for(int i=0 ;i<n ;i++){
            str1[i] = str[i];
    }

    for(int i=0 ;i<n ;i++){
        printf("%c",str1[i]);
    }
    return 0 ;
}