#include <stdio.h>

void prime(int a){
    int count =0;
   for(int i = 1;i<=a ;i++){
     if(a%i ==0){
        count++;
     }
   }
   if(count == 2){
     printf("Prime Number");
   }else{
     printf("Not a Prime Number");
   }
}


int main(){
    int num;
    scanf("%d",&num);

    prime(num);

    return 0;
}