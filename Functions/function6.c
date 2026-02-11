#include <stdio.h>
int fact(int a){
    int fact = 1;
    for(int i =1;i<=a;i++){
        fact = fact*i;
    }

    return fact;
}


int main (){
    int num;
    scanf("%d",&num);

    int total = fact(num);
    printf("%d",total);

    return 0;
}