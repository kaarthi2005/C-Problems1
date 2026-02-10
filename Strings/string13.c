#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int n = strlen(str);
    char str1;
    scanf("%c",&str1);
     
    int index = -1;
    
    for(int i=0 ;i<n;i++){
        if(str[i] == str1){
            index = i;
        }
    }

    printf("%d",index);


    return 0;
}