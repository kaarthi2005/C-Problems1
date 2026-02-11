#include <stdio.h>

void perfect(int a){
    int sum =0;
    for(int i=1 ;i<a;i++){
       
       if(a%i == 0){
          sum+=i;
       }
    }
    if(sum == a){
        printf("Perfect NUmber");
    }else{
        printf("Not  a perfect number");
    }

}


int main (){
    int num;
    scanf("%d",&num);

    perfect(num);
    return 0;
}