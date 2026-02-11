#include <stdio.h>

void maximun(int a,int b){
    if(a<b){
        printf("%d is greater than %d",b,a);
    }
    if(a>b){
        printf("First number is Larger");
    }
    if(a==b){
        printf("Both Number are equal");
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    maximun(a,b);

    return 0;
}