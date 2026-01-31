#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

   
    int count = 0;

    int day = 2;

    int dropday = 0;
    int first;
    scanf("%d", &first);
    while (day <= n)
    {
        int arr;
        scanf("%d", &arr);

        if (arr < first)
        {

            count++;
            if (count == 3 && dropday == 0)
            {
                dropday = day;
            }
        }
        first = arr;
        day++;
        
    }
    if (dropday == 0){
        printf("Crash Day: Not Detected\n");
    }
    else{
    printf("Crash Day:  %d\n", dropday);
    }


    printf("Total Crops: %d",count);

    return 0;
}