#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    

    printf("Enter regular online --R & regular offline --R ");
    printf("Enter Scholarship online --S & Scholarship offline --S");
    char ch ;
    scanf(" %c",&ch);

    switch (n)
    {
    case 1:
        if(ch == 'R'){
            printf("5000");
        }
        else if (ch == 'S'){
            printf("3000");
        }
        break;
    
    case 2:
        
       if(ch == 'R'){
            printf("9000");
        }
        else if (ch == 'S'){
            printf("7000");
        }
        break;
    
    default:
        break;
    }

    return 0;
}