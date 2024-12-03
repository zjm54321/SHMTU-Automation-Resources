#include <stdio.h>

int main(void) 
{
    int n;
    scanf("%d", &n);

    // 输出所有在第一列的同学对应的编号
    for (int i = 1; i <= n; i += 2) 
    {
        printf("%d", i);
        if (i + 2 <= n) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}