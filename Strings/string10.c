#include <stdio.h>

#include <string.h>

int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int n= strlen(str);

    for(int i=0 ;i<n ;i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i]+32;
        }
    }
    for(int i=0 ;i<n ;i++){
        printf("%c",str[i]);
    }

    return 0;
}