#include <stdio.h>

int main(){

    int length;
    int breadth;

    scanf("%d\n%d",&length,&breadth);

    int perimeter_of_rectangle = 2 * (length+breadth);

    printf("%d",perimeter_of_rectangle);

    return 0;
}