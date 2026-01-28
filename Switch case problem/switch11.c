#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    float num;
    scanf("%0.0f",&num);
    switch (n)
    {
    case 1:
        if(1 >= num){
            printf("Normal Speed");
        }
        else{
            printf("Speed Reduced");
        }
        break;
    case 2:
        if(2 >= num){
            printf("Normal Speed");
        }
        else{
            printf("Speed Reduced");
        }
        break;
    
    default:
        break;
    }

    return 0;
}