#include <stdio.h>
#include <stdbool.h>

int main (){

    int totaldata;
    scanf("%d",&totaldata);

    int num;
    scanf("%d",&num);
    int sum=0;
    int count=0;
    bool s = false;

    while (num--)
    {
        int datausage;
        scanf("%d",&datausage);

        sum+=datausage;
        if(totaldata >=datausage){
            count++;
        }
        else{
            s =true;
        }


    }

    printf("Days Used : %d",count);

    if(s){
        printf("Remaining Data: 0GB\n");
    }
    else{
        printf("Remaining Data: %dGB",totaldata-sum);
    }
    



    return 0;
}