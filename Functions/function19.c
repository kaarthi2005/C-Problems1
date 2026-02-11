#include <stdio.h>

int power(int a,int b){
    int sum = 1;
    for(int i =0 ;i<b ;i++){
        sum *= a;
    }
    return sum;
}
int main(){
    int num,num2;
    scanf("%d %d",&num,&num2);
    int total = power(num,num2);
    printf("%d",total);

    return 0;
}