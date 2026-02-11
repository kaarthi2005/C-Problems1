#include <stdio.h>
void reverse(int a){
    int rem = 0;
    for(;a>0;a/=10){
        rem = a%10;
        printf("%d",rem);
    }
}

int main (){
    int num;
    scanf("%d",&num);

     reverse(num);
    
    return 0;
}