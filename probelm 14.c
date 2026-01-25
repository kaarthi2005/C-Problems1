#include <stdio.h>

int main (){

    int num , square ,cube ;
    scanf("%d",&num);

    square = num*num;
    cube = num * num * num;

    printf("%d \n%d",square,cube);

    return 0;
}