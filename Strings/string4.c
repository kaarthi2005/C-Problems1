#include <stdio.h>

#include <string.h>


int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
    int arr[26];
    for(int i=0 ; str[i] != '\0';i++){
        for(int j= n-1 ; j>=0 ;j--){
            arr[j] = str[i];
            i++;
        }
        break;
    }
    for(int i =0 ;i<n ;i++){
        printf("%c",arr[i]);
    }

    return 0;
}