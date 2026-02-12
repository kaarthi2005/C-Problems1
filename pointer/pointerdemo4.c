#include <stdio.h>
#include <string.h>
int vowel(char str[],int len){
    char *p = str;
    int index = 0;
    for(int i=0 ;i<len ;i++){
        if(*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' ||*(p+i) == 'u' ||*(p+i) == 'A' ||*(p+i) == 'E' ||*(p+i) == 'I' ||*(p+i) == 'O' ||*(p+i) == 'U'  ){
            index = i;
            break;
        }
    }
    return index;
}

int main (){
    char str [1000];
    fgets(str,sizeof(str),stdin);

    int len = strlen(str);

    int total =vowel(str ,len);
    printf("%d",total);


    return 0;
}