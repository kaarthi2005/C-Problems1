#include <stdio.h>

int main()
{
    printf("     Collage Hostal Fees     \n");
    printf("Type1 for Singleroom or Type2 for Doubleroom or Type3 for Triple :  \n");

    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Hostel Fee = 80,000");
        break;
    case 2:
        printf("Hostel Fee = 60,000");
        break;
    case 3:
        printf("Hostel Fee = 45,000");
        break;

    default:
        break;
    }

    return 0;
}