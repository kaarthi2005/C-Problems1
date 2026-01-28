#include <stdio.h>

int main()
{
    printf("   This is Bus Pass Eligility   \n");
    printf("Type1 for Student or type2 for employee : \n");
    int n;
    scanf("%d", &n);
    
    printf("Enter your travelling Distance : ");
    int distance ;
    scanf("%d",&distance);
    switch (n)
    {
    case 1:
        if(distance <= 30 ){
            printf("Eligible.");
        }
        else{
            printf("Eligible with Extra fee .");
        }

        break;

    case 2:
        if(distance <= 30 ){
            printf("Eligible.");
        }
        else{
            printf("Not Eligible.");
        }
        break;
   

    default:
        break;
    }

    return 0;
}