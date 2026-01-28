#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int grade;
    if (n >= 80)
    {
        grade = 1;
    }
    else if ((n >= 60) && (n < 80))
    {
        grade = 2;
    }
    else
    {
        grade = 3;
    }

    switch (grade)
    {
    case 1:
        printf("Excellent");

        break;

    case 2:

        printf("Good");
        break;
    case 3:

        printf("Needs Improvement");
        break;

    default:
        break;
    }

    return 0;
}