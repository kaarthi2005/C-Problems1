#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int grade;
    if ((n >= 90) && (n <= 100))
    {
        grade = 1;
    }
    else if ((n >= 80) && (n < 90))
    {
        grade = 2;
    }
    else if ((n >= 70) && (n < 80))
    {
        grade = 3;
    }
    else if ((n >= 60) && (n > 70))
    {
        grade = 4;
    }
    else if ((n >= 50) && (n > 60))
    {
        grade = 5;
    }
    else if ((n >= 40) && (n > 50))
    {
        grade = 6;
    }
    else if ((n >= 35) && (n >= 39))
    {
        grade = 7;
    }
    else
    {
        grade = 8;
    }

    switch (grade)
    {
    case 1:
        printf("Grade A");
        break;
    case 2:
        printf("Grade B");
        break;
    case 3:
        printf("Grade C");
        break;
    case 4:
        printf("Grade D");
        break;
    case 5:
        printf("Grade E");
        break;
    case 6:
        printf("Grade F");
        break;
    case 7:
        printf("Supplementary");
        break;
    case 8:
        printf("Fail");
        break;

    default:
        break;
    }

    return 0;
}