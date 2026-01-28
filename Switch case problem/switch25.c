#include <stdio.h>

int main (){
    printf("     Exam Fee Calculation     \n");
    printf("Type1 for General or Type2 for OBC or Type3 for SC/ST : ");
    int n;
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("₹1200");
        break;
    case 2:
        printf("₹800");
        break;
    case 3:
        printf("₹500");
        break;
    
    default:
        break;
    }



    return 0;

}