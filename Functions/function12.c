#include <stdio.h>

void leap(int year){
    if(year % 4 ==0){
        if(year %100 !=0 || year % 400==0){
            printf("Leap Year");
        }
        else{
            printf("Not a Leap Year");
        }
    }else{
        printf("Not a leap year");
    }

}

int main (){
    int year;
    scanf("%d",&year);

    leap(year);

    return 0;
}