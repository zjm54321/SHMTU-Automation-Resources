#include <stdio.h>

void pyramid(int n);

int main(void) 
{
    int n;
    scanf("%d", &n);
    pyramid(n);
    return 0;
}

void pyramid(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        // 打印前导空格
        for (int j = 0; j < n - i; j++) 
        {
            printf(" ");
        }
        // 打印数字和空格
        for (int k = 0; k < i; k++) 
        {
            printf("%d ", i);
        }
        // 换行
        printf("\n");
    }
}