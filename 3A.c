#define ARRAY_LENGTH 12
#define NUM_OF_ELEMENTS 1000

#include <stdio.h>

int main()
{
    int i, j;
    char a[NUM_OF_ELEMENTS][ARRAY_LENGTH + 1];
    for (i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        scanf("%s", a[i]);
    }

    char min[ARRAY_LENGTH];
    char max[ARRAY_LENGTH];

    for (i = 0; i < ARRAY_LENGTH; i++)
    {
        int zero_count = 0;
        int one_count = 0;
        for (j = 0; j < NUM_OF_ELEMENTS; j++)
        {
            if (a[j][i] == '0')
            {
                zero_count++;
            }
            else
            {
                one_count++;
            }
        }
        if (zero_count > one_count)
        {
            max[i] = '0';
            min[i] = '1';
        }
        else
        {
            max[i] = '1';
            min[i] = '0';
        }
    }

    int min_int = 0, max_int = 0;
    for (i = 0; i < ARRAY_LENGTH; i++)
    {
        min_int *= 2;
        min_int += min[i] - '0';
        max_int *= 2;
        max_int += max[i] - '0';
    }
    printf("%d\n", min_int * max_int);
}
