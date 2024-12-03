#include <stdio.h>

int sign(int x);

int main(void) 
{
    int x;
    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    return 0;
}

// 实现符号函数
int sign(int x) 
{
    if (x > 0) 
    {
        return 1;
    } 
    else if (x == 0) 
    {
        return 0;
    } 
    else 
    {
        return -1;
    }
}