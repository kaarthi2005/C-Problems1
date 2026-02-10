#include <stdio.h>
#include <string.h>

int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
    int count = 0;
    for(int i=0; i<n ;i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("%d",count+1);

    return 0;
}