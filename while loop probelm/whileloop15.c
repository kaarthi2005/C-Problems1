#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int sum =0;
    int count =0;

    while (n--)
    {
        int num;
        scanf("%d",&num);

        sum+=num;

        if(num>4){
            count++;
        }
    }
    printf("Total Overtime: %d \n",sum);
    printf("Burnout Days: %d",count);
    

    return 0;
}