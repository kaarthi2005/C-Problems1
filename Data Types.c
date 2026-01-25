#include <stdio.h>

int main(){

    //1. Print int variable
    int a = 10 ;
    int a1 = 99;

    printf("%d\n",a);
    printf("%d\n",a1);

    

    //3. Print double variable

    double num1 = 12.345;
    printf("%lf\n", num1);

    
    double num2 = 99.999;
    printf("%lf\n", num2);

    //4. Print char variable

    char ch = 'A';
    printf("%c\n",ch);

    char ch1 = 'M';
    printf("%c\n",ch1);


    //5. Size of int

    printf("%d\n", sizeof(int));

    //6. Size of float
    printf("%d\n", sizeof(float));

    //7. Size of double
    printf("%d\n", sizeof(double));

    //8. Size of char
    printf("%d\n", sizeof(char));


    //9. Assign int to float

    int n1 = 10;
    printf("%0.1f",n1);

    //10. Store char in int

    char ch1 = 'a';

    printf("%d",ch1);
    
    char ch2 = 'A';

    printf("%d",ch2);

    
    return 0;
}