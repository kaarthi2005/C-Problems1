#include <stdio.h>
#include <math.h>

int main(){
    int principle_amount , rate_of_interset , time;
    scanf("%d\n%d\n%d",&principle_amount,&rate_of_interset,&time);  

    int simple_interest = ( principle_amount * rate_of_interset * time ) / 100;

    printf("%d",simple_interest);

    

    return 0;
}