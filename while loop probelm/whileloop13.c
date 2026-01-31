#include <stdio.h>


int main (){

    int totaldata;
    scanf("%d",&totaldata);

    int n;
    scanf("%d",&n);

    
    
    int arr[n];
    

    for(int i =0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int i=0;
     int a = -1;
    int b = 0;
   
    while (i<n && totaldata >0)
    {
        totaldata -=arr[i];
        
        i++;

        if (totaldata<= 0) {
            a = i;
            if (totaldata < 0) {
                b = -a;  
            }
            break;

    }
}

    

    
    if (a == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } 
    else {
        printf("Exhausted Day: %d\n", a);
        printf("Overused Data: %d\n", b);
    }

    

    

    return 0;
}
