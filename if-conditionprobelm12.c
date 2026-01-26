#include <stdio.h>

int main (){
    int mark1, mark2 ,mark3 ,mark4,mark5;
    printf("Enter a Five Subject Marks : ");
    scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);

    float average = (mark1 + mark2 +mark3 + mark4 + mark5 )/5;


    if(average >= 90 && average <=100){
        printf("Grade A");
    }
    else if(average >= 75 && average <90){
        printf("Grade B");
    }
    else if (average >= 60 && average <75){
        printf("Grade C");
    }
    else if (average >=45 && average<60){
        printf("Grade D");
    }
    else{
        printf("Fail");
    }

    return 0;
}