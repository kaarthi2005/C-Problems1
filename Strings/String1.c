#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int length = strlen(str);
    int max =0 ;

    for(int i =0 ; i<length ;i++){
        int count =0 ;
        int num1[256] ={0};
        for(int j = i ;j<length ;j++){
            if(str[j] == '\n'){
                break;
            }
            if(num1[str[j]]==1){
                break;
            }
            num1[str[j]]=1;
            count++;
        }
        if(count>max){
            max = count ;
        }
    }
    printf("%d ",max);


    return 0;
}
