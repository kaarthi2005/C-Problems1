#include <stdio.h>

#include <strings.h>

int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    
    int arr[26];

    for(int i =0 ;str[i] != '\0' ;i++){
        arr[i] = str[i];
    }
    for(int i=0 ;str[i] != '\0' ;i++){
        if(arr[i] >= 'A' && arr[i] <='Z'){
            printf("%c",arr[i]);
        }
        if(arr[i] >='a' && arr[i] <= 'z'){
            printf("%c",arr[i]);
        }
        if(arr[i+1] == '@'){
            break;
        }
    }

    return 0;
}