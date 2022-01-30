#include <stdio.h>
#include <stdlib.h>

int threesum(int *array, int i)
{
    int threesum;
    threesum = array[i] + array[i + 1] + array[i + 2];
    return threesum;
}

int main()
{
    int size;
    scanf("%d", &size);
    int *array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int large_count = 0;
    for (int i = 0; i < size - 3; i++)
    {
        if (threesum(array, i) < threesum(array, i + 1))
        {
            large_count++;
        }
    }
    printf("%d\n", large_count);
}
