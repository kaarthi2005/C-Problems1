#include <stdio.h>

int main(){
    int capacity;
    scanf("%d",&capacity);

    int n;
    scanf("%d",&n);
    int allpatients =0;
    int arr[n];

    for(int i=0;i<n;i++ ){
    
        
        scanf("%d",&arr[i]);
        allpatients+=arr[i];
        
        
    }
   

    int a = 0;
    int i =0;
    while (i<n && capacity >= 0)
    {
      if(a+arr[i]  <= capacity){
        a+=arr[i];
      }
      else{
        int c =  capacity-a;
        a+=c;
      }
      i++;
    }

    printf("Treated Patients: %d\n",a);
    printf("Rejected Patients: %d",allpatients-a);
    
    


    return 0;
}