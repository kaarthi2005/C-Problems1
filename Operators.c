#include <stdio.h>

int main (){
   // 1. Apply pre-increment to a variable.

   int a = 5;
   a++;
   printf("%d",a);

   int a = 10;
   a++;
   printf("%d",a);

   int a = 0;
   a++;
   printf("%d",a);

    //2. Apply post-increment and print the value.

    int a = 5;
   printf("%d",a);
    a++;

   int a = 9;
   printf("%d",a);
   a++;

   int a = 0;
   printf("%d",a);
   a++;


    //3.Apply pre-decrement to a variable.

    int a = 10;
   a--;
   printf("%d",a);

   int a = 5;
   a--;
   printf("%d",a);

   int a = 1;
   a--;
   printf("%d",a);


    //4. Increment a variable twice and print result.

    int a = 5;
   a+2;
   printf("%d",a);

   int a = 0;
   a+2;
   printf("%d",a);

   int a = 10;
   a+2;
   printf("%d",a);


   //5. Decrement a variable twice and print result.

   int a = 6;
   a-2;
   printf("%d",a);

   int a = 2;
   a-2;
   printf("%d",a);

   int a = 10;
   a-2;
   printf("%d",a);

    return 0;
}