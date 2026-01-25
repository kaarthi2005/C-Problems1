#include <stdio.h>

int main (){
    int celsius;
    scanf("%d",&celsius);

    int fahranheit = ( celsius * 9/5 ) + 32;

    printf("%d",fahranheit);


    return 0;
}