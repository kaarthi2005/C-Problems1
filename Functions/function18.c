#include <stdio.h>
int gcd(int a,int b){
    int gcd = 0;
   for(int i=1 ; i<=a && i<=b ;i++){
    if(a%i==0 && b%i==0){
        if(a<b){
            gcd = i;
        }else{
            gcd = i;
        }

    }
   }
   return gcd;
}

int main(){
    int num,num2;
    scanf("%d %d",&num,&num2);

    int total = gcd(num,num2);

    printf("%d",total);

    return 0;
}