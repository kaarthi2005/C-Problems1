#include <stdio.h>
float area(int a){
    float area = 3.14*a*a;
    return area;
}


int main(){
    int radius;
    scanf("%d",&radius);

    float total =area(radius);
    printf("%0.2f",total);
    return 0;
}