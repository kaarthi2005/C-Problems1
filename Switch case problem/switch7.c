#include <stdio.h>

int main (){
    printf("Press 1 for saving || press 2 for Fixed depost\n");
    int n;
    scanf("%d",&n);
    printf("Enter how many year you want !\n");
    int a;
    scanf("%d",&a);
    switch (n)
    {
    case 1:
        printf("Interest 4%%");
        break;
    case 2: 
        if(a<= 3){
            printf("Interest 5%%");
        }
        else{
            printf("Interest 7%%");
        }
    
    default:
        break;
    }




    return 0;
}