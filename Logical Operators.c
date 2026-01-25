#include <stdio.h>

int main (){
    
    //1. Use logical AND on two non-zero values.

    int a =5;
    int b=3;

    printf("%d",a&&b);

    int a =1;
    int b=1;

    printf("%d",a&&b);
    
    
    int a =0;
    int b=5;

    printf("%d",a&&b);



    //2. Use logical OR on two values.

    int a =0;
    int b=5;
    printf("%d",a||b);


    int a =0;
    int b=0;
    printf("%d",a||b);


    int a =3;
    int b=7;
    printf("%d",a||b);




    //3. Apply logical NOT on zero.

    int a =0;
    printf("%d",!a);


    //4. Apply logical NOT on non-zero value.

    int a =5;
    printf("%d",!a);


    int a =1;
    printf("%d",!a);

    int a =-3;
    printf("%d",!a);


    //5.Check two conditions using AND and OR.

    int a=5 ;
    int b=10;

    int c = (a && b) || (a || b);
    printf("%d",c);


    int a=0 ;
    int b=5;

    int c = (a && b) || (a || b);
    printf("%d",c);


    int a=0 ;
    int b=0;

    int c = (a && b) || (a || b);
    printf("%d",c);



    return 0;
}