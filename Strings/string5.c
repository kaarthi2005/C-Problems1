#include <stdio.h>
#include <string.h>

int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int n = strlen(str);
   
   
    int palindrome = 0;
    int arr[26];
    for(int i=0 ;i<=n-1 ;i++){
        arr[i] = str[i];
    }

    int temp =0;
    temp= arr[0];
    arr[0] = arr[n-1-1];
    arr[n-1-1] = temp;

   
    if(arr[0] == arr[n-1-1] ){
           palindrome=1;
       }
    

    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    
    return 0;
}