#include <stdio.h>

int main(void) 
{
    int N;
    scanf("%d", &N);

    // 打印下三角九九口诀表
    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d*%d=%-4d", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}