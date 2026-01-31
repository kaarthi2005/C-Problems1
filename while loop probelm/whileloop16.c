#include <stdio.h>

int main(){
    int weigth;
    scanf("%d",&weigth);
    int temp = weigth;
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i =0;
    int count=0;
    int weight2 =0;
    
    while (i<n && weigth>0)
    {
       weigth -= arr[i];
       weight2 +=arr[i];
       if(weigth != temp && weight2 < temp){
        count++;
        i++;
       }
    }
    printf("People Entered: %d\n",count);
    if(weight2 >temp ){
        printf("Yes");
    }
    else{
        printf("No");
    }

    

    return 0;
}