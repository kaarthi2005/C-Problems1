#include <stdio.h>

void menu(int a,int b){
    
    printf("Press 1 for addition\n");
      printf("Press 2 for Subtraction\n");
        printf("Press 3 for Divde\n");
          printf("Press 4 for Multipilication\n");
          int num3 ;
          scanf("%d",&num3);

    switch (num3)
    {
    case 1:
       printf("%d",a+b);
        break;
    case 2:
       printf("%d",a-b);
        break;
    case 3:
       printf("%d",a/b);
        break;
    case 4:
       printf("%d",a*b);
        break;
    
    
    default:
        printf("Enter the correct input Symbol");
        break;
    }


}

int main (){
    int num ,num2;
    scanf("%d %d",&num,&num2);
    menu(num,num2);

    return 0;
}