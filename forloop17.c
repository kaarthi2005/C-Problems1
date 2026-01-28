#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b =n;
    int sum =0;
     
    for( ;n>0; n = n/10){
        int fact =1;
       a =n%10;
        for(int i =1 ;i<= a ;i++){
            fact = fact*i;
            
        }
        sum += fact;
    }
    if(b == sum){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}