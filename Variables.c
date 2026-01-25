#include <stdio.h>

int main (){

    //1. Declare an integer variable and print it
    int a = 10;
    int a1= 50;

    printf("%d\n",a);
    printf("%d\n",a1);


   //2. Declare two integer variables and print them
    int b = 10;
    int b1= 50;

   printf("%d %d\n",b,b1);

    //3. Declare a float variable and print it

    float c = 2.5;
    float c1 =6.75;

    printf("%0.1f\n",c);
    printf("%0.2f\n",c1);

   // 5. Change variable value and print updated value

   int d = 10;
   d =20;

   printf("%d",d);

    //6. Add two variables
    
    int num1 = 10;
    int num2= 5;

    printf("%d",num1+num2);


   // 7. Subtract two 
   
   int n1 = 8;
   int n2 =3;

   printf("%d",n1-n2);


   //8.Multiply two variables

   printf("%d",n1*n2);

   //9. Divide two variables

   printf("%d",n1/n2);

   //10. Assign value later and print

    int m;
    scanf("%d",&m);
    printf("%d",m);


    return 0;

}