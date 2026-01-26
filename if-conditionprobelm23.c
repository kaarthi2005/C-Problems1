#include <stdio.h>

int main (){
    int month;
    printf("Enter a number to find Month : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("January has 31 Days.");
        break;
    case 2:
        printf("February has 28 or 29 Days.");
        break;
    case 3:
        printf("march has 31 Days.");
        break;
    case 4:
        printf("April has 30 Days.");
        break;
    case 5:
        printf("May has 31 Days.");
        break;
    case 6:
        printf("June has 30 Days.");
        break;
    case 7:
        printf("July has 31 Days.");
        break;
    case 8:
        printf("August has 31 Days.");
        break;
    case 9:
        printf("September has 30 Days.");
        break;
    case 10:
        printf("October has 31 Days.");
        break;
    case 11:
        printf("November has 30 Days.");
        break;
    case 12:
        printf("December has 31 Days.");
        break;
    
    default:
        printf(  "Enter only 1 - 12 in range"   );
        break;
    }

    return 0 ;
}