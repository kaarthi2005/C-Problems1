#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int max = 0;
    int maxvalue = 0;
    int reapt = 0;
    for (int i = 0; i < length; i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (j = (j == i ? j + 1 : j))
            {
                if (str[i] == str[j])
                {
                    count++;
                    reapt = 1;
                }
            }
        }
        if (reapt)
        {
            if (count > max)
            {
                max = count;
                maxvalue = str[i];
            }
        }
        else
        {
            if (i + 1 != length)
            {
                if (str[i] < str[i + 1])
                {
                    maxvalue = str[i + 1];
                }
            }
        }
    }

    int max2 = str[0];

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (maxvalue > str[j] && str[j] > max2)
            {
                max2 = str[j];
            }
        }
    }
    printf("%c ", max2);
    return 0;
}