#include <stdio.h>
#include <string.h>

int  vowelcount(char str[]){
    int count =0;
    char *p =str;
    for(int i=0; *(p+i) !='\0';i++){
        if(*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' ||*(p+i) == 'u' ||*(p+i) == 'A' ||*(p+i) == 'E' ||*(p+i) == 'I' ||*(p+i) == 'O' ||*(p+i) == 'U'  ){
            count++;
        }
    }
    return count ;
}

int main (){
    char str[1000];
    fgets(str,sizeof(str),stdin);

    int total = vowelcount(str);
    printf("%d",total);


    return 0;
}