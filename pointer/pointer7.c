#include <stdio.h>
#include <string.h>


void palindrome(char str[]){
    char *p = str;
    char str2 [1000];
    char *a = str2;
   
    

    int length = strlen(str)-1;
    int k = 0;
    for(int i=length ;i>=0;i--){
        *(a+i) = *(p+k);
        k++;
    }
    int palindrome = 1;
  

       if(palindrome){
         printf("Yes");
       }else{
         printf("No");
       }
      
     
    }


int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    palindrome(str);
    return 0;
}