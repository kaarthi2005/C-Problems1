#include <stdio.h>

int main(){
    int attendance , mark;
    scanf("%d %d",&attendance,&mark);

    if(attendance <= 75 && mark <50){
        printf("Fail");
    }
    else if(mark>=75){
        printf("Distinction");
    }
    else if (mark >=50  && mark <= 74){
        printf("Pass");
    }

    return 0;
}