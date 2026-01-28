#include <stdio.h>

int main (){
    printf("      Library Late Fee System    \n");
    printf("Type1 for General Book or Type2 for Reference : ");
    int n;
    scanf("%d",&n);
    printf("Enter how many  daysLate :  ");
    int a;
    scanf("%d",&a);

    switch (n)
    {
    case 1:
        printf("%d",a*2);
        break;
     case 2:
        printf("%d",a*5);
        break;
    
    default:
        break;
    }
    return 0;
}

