#include <stdio.h>

int main (){

    int fahnrenheit ;
    scanf("%d",&fahnrenheit);

    float celsius = (fahnrenheit - 32)* 5/9 ;

    printf("%.0f",celsius);

    return 0;
}