#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
    int frg[26];
    for(int i=0 ;str[i] !='\0' ;i++){
       frg[i] =str[i];
    }
    int val = 0;
    for(int j=0 ;j<n-1 ;j++){
        if(frg[j] >= 'A' && frg[j] <= 'Z'){
            val = 1;
        }
    }

    if(val){
        printf("Vaild");
    }
    else{
        printf("Invalid");
    }
    return 0;
}