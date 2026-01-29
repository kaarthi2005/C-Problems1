#include <stdio.h>

int main (){
    int weight;
    scanf("%d",&weight);

    int n;
    scanf("%d",&n);

    int arr[n];
    int totaweight =0 ;
    for(int i=0 ;i<n ;i++){
        scanf("%d",&arr[i]);
    }

    int i =0 ;
    int count =0 ;
    while (i<n)
    {
        if(  weight >= totaweight + arr[i]){
            totaweight += arr[i];
            count++;
        }
        i++;
    }
    printf("%d",count);
    if(count==n){
        printf("NO");
    }
    else{
        printf("YES");
    }



    return 0;
}