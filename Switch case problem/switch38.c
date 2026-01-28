#include <stdio.h>

int main (){
    printf("        Hospital Consultation Fee      \n");
    printf("Type1 for General Physician or Type2 for Specialist : ");
    int n;
    scanf("%d",&n);
    

    switch (n)
    {
    case 1:
        printf("Consultation Fee 500");
        break;
     case 2:
        printf("Consultation Fee 1200");
        break;
    
    default:
        break;
    }
    return 0;
}