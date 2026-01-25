#include <stdio.h>

int main(){

    int length;
    int breadth;

    scanf("%d\n%d",&length,&breadth);

    int area_of_rectangle = length*breadth;

    printf("%d",area_of_rectangle);

    return 0;
}