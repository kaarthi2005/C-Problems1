#include <stdio.h>

int count(int a){
  
    int count =0 ;
    for(;a>0;a/=10){
        count++;
    }
    return count;
}

int main (){
    int num ;
    scanf("%d",&num);
  
    int total = count(num);
    printf("%d",total);


    return 0;
}