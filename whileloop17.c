#include <stdio.h>

int main (){
    int balance;
    scanf("%d",&balance);
    int temp = balance;

    int n;
    scanf("%d",&n);

    int arr[n];
     int balance2 = 0;
    int balance3=0;
    for(int i =0 ;i<n ;i++){
        scanf("%d",&arr[i]);
        balance3 +=arr[i];
    }

    int i =0 ;
    int count =0;
   

    while (i<n && balance>0)
    {
        balance-=arr[i];
        balance2 +=arr[i];
        if(balance2 <temp ){
        count++;
        
        }
        i++;
    }
    printf("Successful Purchase: %d\n",count);
    printf("Final Balance: %d",balance3-temp);
    

    return 0;
}