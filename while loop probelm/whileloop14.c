#include <stdio.h>

int main(){
    int balance;
    scanf("%d",&balance);
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i =0;i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int i =0;
    int wdhdraw=0;

    while (i<n && balance>=arr[i])
    {
        balance -=arr[i];
        wdhdraw++;
        i++;

        
    }
    printf("Successful withdrawals: %d\n",wdhdraw);
    printf("Remaining Cash: %d",balance);
    

    

    return 0;
}
