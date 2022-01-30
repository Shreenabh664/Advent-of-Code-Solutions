#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    scanf("%d", &size);
    long long int horizontal_position = 0;
    long long int depth = 0;
    long long int aim = 0;
    for (int i = 0; i < size; i++)
    {
        char *str = (char *)malloc(sizeof(char) * 8);
        scanf("%s", str);
        if (strcmp(str, "forward") == 0)
        {
            int num;
            scanf("%d", &num);
            horizontal_position += num;
            depth += aim * num;
        }
        if (strcmp(str, "up") == 0)
        {
            int num;
            scanf("%d", &num);
            aim -= num;
        }
        if (strcmp(str, "down") == 0)
        {
            int num;
            scanf("%d", &num);
            aim += num;
        }
        free(str);
    }
    printf("%lld\n", horizontal_position * depth);
}
