#include <stdio.h>

void armstrong(int num){

    int org = num;
    int rem =0;
    int mul = 0; 
    int arr[100];
    int i=0;
    for(;num>0;num/=10){
        rem = num%10;
        mul = rem*rem*rem;
        arr[i] = mul;
        i++;
    }
    
    int k = 0;
    for(int j=i-1 ;j>=0 ;j--){
        k +=arr[j];
    }
    if(org == k){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong NUmber");
    }

}



int main(){
    int num;
    scanf("%d",&num);
    armstrong(num);

    return 0;
}