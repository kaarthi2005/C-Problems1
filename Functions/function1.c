#include <stdio.h>
float simple(int P,int R,int T){
        float a = (P*R*T)/100;
        return a;
}
int main (){
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    float total = simple(P,R,T);
    printf("%0.2f",total);
    return 0;
}
