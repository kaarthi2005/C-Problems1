#include <stdio.h>

void mul (int a){

    int mul =0;
    for(int i=1 ;i<=10 ;i++){
        mul = a*i;
        printf("%d *  %d = %d",a,i,mul);
        printf("\n");
    }
   
}
int main (){
    int num;
    scanf("%d",&num);

    mul(num);
    return 0;
}