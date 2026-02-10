#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
   
    int seen[256]={0};

    for(int i=0 ;str[i] !='\0' ;i++){
        seen[str[i]]=1;
    }
    int count =0;
    for(int j=0 ;str[j] !='\0';j++){
        if(seen[str[j]]==1){
            count++;
        }
    }
    printf("%d",count-1);

    return 0;
}