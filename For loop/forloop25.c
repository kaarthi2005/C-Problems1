int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int b =n;
    int sum =0;
    int c;
     
    for( ;n>0; n = n/10){
        c=0;
       a =n%10;
       c =a*a*a;
       sum += c;
       
    }
    
    if(b == sum){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}