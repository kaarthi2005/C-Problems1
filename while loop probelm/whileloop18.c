#include <stdio.h>

int main(){

    int capacity;
    scanf("%d",&capacity);

    int n;
    scanf("%d",&n);
    int count=0;
    int count2=0;

    while (n--)
    {
        int num;
        scanf("%d",&num);

        if(num<=capacity){
            count++;
        }
        else{
            count2++;
        }
    }
    printf("Safe Hours: %d\n",count);
    printf("Failure Count : %d",count2);
    return 0;
}