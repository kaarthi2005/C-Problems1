#include <stdio.h>

int main(){
    int num1;
    scanf("%d",&num1);

    int num2;
    scanf("%d",&num2);
    
    int power=1;
  

        for(int i =0; i <= num2-1; i++){
            power = power*num1;
        }
        printf("%d",power);


    return 0;
}