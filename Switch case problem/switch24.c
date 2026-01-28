#include <stdio.h>

int main (){
    printf(" Mobile Call Charges \n");

    printf("Type1 for Local or Type2 for STD or Type3 for ISD : ");
    int n;
    scanf("%d",&n);

    printf("Enter the number of talk time in min: ");
    int talk ;
    scanf("%d",&talk);

    switch (n)
    {
    case 1:
        printf("%d",talk*1);
        break;
     case 2:
        printf("%d",talk*3);
        break;
     case 3:
        printf("%d",talk*10);
        break;
    
    default:
        break;
    }




    return 0;

}