#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int dupilcate = -1;


    for (int i = 0; i < n ; i++)
    {

      for(int j = i+1 ; j<n ;j++)
        {
            if(arr[i]==arr[j]){
            dupilcate = arr[j];
            
            printf("%d", dupilcate);
            
            return 0;
            }
        }
       
    }
    if (dupilcate == -1)
    {
        printf("%d", dupilcate);
    }

    return 0;
}