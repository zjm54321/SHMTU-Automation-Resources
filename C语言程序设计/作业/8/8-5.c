#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    int min_value;
    scanf("%d", &min_value);

    for (int i = 1; i < n; i++) 
    {
        int value;
        scanf("%d", &value);
        if (value < min_value) 
        {
            min_value = value;
        }
    }

    printf("min = %d\n", min_value);

    return 0;
}