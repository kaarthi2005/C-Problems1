#include <stdio.h>
int sum(int a){
    int sum =0;
    for(int i=1 ;i<=a ;i++){
        sum+=i;
    }
    return sum;
}


int main (){
    int num;
    scanf("%d",&num);

    int total = sum(num);
    printf("%d",total);
    return 0;
}