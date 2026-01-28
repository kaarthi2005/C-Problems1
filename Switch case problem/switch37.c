#include <stdio.h>

int main (){
    printf("       Online Course Certificate Fee     \n");
    printf("Type1 for Free Course or Type2 for Paid Course : ");
    int n;
    scanf("%d",&n);
    

    switch (n)
    {
    case 1:
        printf("Certificate Fee 0");
        break;
     case 2:
        printf("Certificate Fee 500");
        break;
    
    default:
        break;
    }
    return 0;
}
