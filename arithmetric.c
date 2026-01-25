#include <stdio.h>

int main() {

    // 1. Sum of two integers
    printf("Sum Test Cases:\n");
    int a = 5;
    int  b = 5;
    printf("%d\n", a + b);  
    
    
    int a = 3;
    int  b = 7;
    printf("%d\n", a + b); 

    

    // 2. Difference of two integers
   
    int a = 8;
    int b = 3;
    printf("%d\n", a - b);   


    int a = 10;
    int b = 5;
    printf("%d\n", a - b);  


    int a = 15; 
    int b = 10;
    printf("%d\n", a - b);   

    // 3. Product of two integers
  
    int a = 4;
     int b = 5;
    printf("%d\n", a * b); 


    int a = 10;
    int b = 2;
    printf("%d\n", a * b);  
    
    
    int a = 1;
    int b = 20;
    printf("%d\n", a * b);    

    // 4. Quotient and Remainder
    int a = 9;     
    int b = 2;
    int q = a / b; 
    int r = a % b;
    printf("Quotient=%d Remainder=%d\n", q, r); 


    int a = 10; 
    int b = 3;
    int q = a / b; 
    int r = a % b;
    printf("Quotient=%d Remainder=%d\n", q, r);  

  
    // 5. Sum of three integers
   
    int a = 2;
    int  b = 3;
    int  c = 5;
    printf("%d\n", a + b + c);  


    int a = 1;
    int b = 4; 
    int c = 5;
    printf("%d\n", a + b + c);  


    int a = 3; 
    int b = 3;
    int c = 4;
    printf("%d\n", a + b + c);   

    return 0;
}