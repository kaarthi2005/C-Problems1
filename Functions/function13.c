#include <stdio.h>

int power(int a,int b){

    int power = 1;
    for(int i = 0 ;i<b ;i++){
        power *= a;
    }
    return power;
}

int main (){
    int a,b;
    scanf("%d %d",&a,&b);

    int total = power(a,b);
    printf("%d",total);

    return 0;
}