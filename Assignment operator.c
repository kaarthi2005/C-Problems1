#include <stdio.h>

int main (){
    //1. assisn a value and print it

    int a = 10;
    printf("%d",a);

    int a = 5;
    printf("%d",a);

    int a = 0;
    printf("%d",a);

    //2. using += 

    int a = 10;
    int b =5 ;
        a+=b;
    printf("%d",a);

    int a =3;
    int b =7 ;
        a+=b;
    printf("%d",a);

    int a = 0;
    int b =4 ;
        a+=b;
    printf("%d",a);


     //3. using -= 

    int a = 10;
    int b =5 ;
        a-=b;
    printf("%d",a);

    int a =20;
    int b =10;
        a-=b;
    printf("%d",a);

    int a = 5;
    int b =5;
        a-=b;
    printf("%d",a);

     //4. using *= 

    int a = 4;
    int b =5 ;
        a*=b;
    printf("%d",a);

    int a =3;
    int b =3 ;
        a*=b;
    printf("%d",a);

    int a = 10;
    int b =2 ;
        a*=b;
    printf("%d",a);


    //5.using /= ans %= operators

     int a = 9;
    int b =2 ;
    a/=b;
    b%=a;
    printf("%d %d",a,--b);


     int a = 10;
    int b =5 ;
    a/=b;
    b%=a;
    printf("%d %d",a,--b);


    int a = 7;
    int b =3 ;
    a/=b;
    b%=a;
    printf("%d %d",a,b);


    

    



    return 0;
}