#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int orginal = n;
    int rem;
    int sum=0;
    

    for(;n>0;n=n/10){
        rem = n%10;
        sum =sum*10+rem;
    }
    if(orginal == n ){
        printf("Yes");
    }
    else{
        printf("No");
    }
   

    return 0;
}