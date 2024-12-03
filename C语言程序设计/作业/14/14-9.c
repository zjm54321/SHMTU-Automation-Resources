#include <stdio.h>

int main(void) 
{
    int n1, n2;
    scanf("%d", &n1);

    int arr1[n1];
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int found = 0;

    // 找出 arr1 中不在 arr2 中的元素
    for (int i = 0; i < n1; i++) 
    {
        int j;
        for (j = 0; j < n2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                break;
            }
        }
        if (j == n2) 
        {
            if (found) 
            {
                printf(" ");
            }
            printf("%d", arr1[i]);
            found = 1;
        }
    }

    // 找出 arr2 中不在 arr1 中的元素
    for (int i = 0; i < n2; i++) 
    {
        int j;
        for (j = 0; j < n1; j++) 
        {
            if (arr2[i] == arr1[j]) 
            {
                break;
            }
        }
        if (j == n1) 
        {
            if (found) 
            {
                printf(" ");
            }
            printf("%d", arr2[i]);
            found = 1;
        }
    }

    printf("\n");

    return 0;
}