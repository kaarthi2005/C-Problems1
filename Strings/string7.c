#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
    int length = n-1;
    int count = 0;
    for(int i=0 ; i<n ;i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U'  ){
         count++;
        }
    }
    printf("%d",length-count);
    return 0;
}