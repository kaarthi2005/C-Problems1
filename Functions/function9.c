#include <stdio.h>
void reverse(int a){
    int rem = 0;
    int arr[100];
    int i=0;
    for(;a>0;a/=10){
        rem = a%10;
        arr[i] = rem;
        i++;
    }
    int k =0;
    int val = 0;
    for(int j=i-1 ;j>=0;j--){
        if(k == j){
            k++;
            continue;
        }
       if(arr[k] == arr[j]){
           val=1;
          
       }else{
         val = 0;
         break;
       }
    k++;
    }
    if(val){
        printf("palindrome");
    }else{
        printf("Not a Palindrome");
    }

    
}

int main (){
    int num;
    scanf("%d",&num);

     reverse(num);
    
    return 0;
}