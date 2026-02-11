#include <stdio.h>

int sum(int a){
    int rem =0;
    int sum =0 ;
    for(;a>0;a=a/10){
        rem = a%10;
        sum+=rem;
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);

    int total =sum(num);
    printf("%d",total);

    return 0;
}