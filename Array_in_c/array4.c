#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp =0;
    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
         temp = arr[n-1];
         arr[n-1] = arr[0];
        arr[0]= temp ;
    }

    
    for(int i= 0;i<n ;i++){
       
        printf("%d ",arr[i]);
    }

    return 0;
}