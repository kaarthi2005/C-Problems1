#include <stdio.h>

void fiboni(int num){
    int a = 0;
    int b = 1;

    for(int i=0 ;i<num ;i++){
        printf("%d ",a);
        int sum = a+b;
        a = b;
        b = sum;
    }
}

int main(){
    int num;
    scanf("%d",&num);

    fiboni(num);
    return 0;
}