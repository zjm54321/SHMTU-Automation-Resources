#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main(void) 
{
    int m, n, i, cnt;
    scanf("%d %d", &m, &n);
    if (prime(m) != 0) 
    {
        printf("%d is a prime number\n", m);
    }
    if (m < 6) 
    {
        m = 6;
    }
    if (m % 2) 
    {
        m++;
    }
    cnt = 0;
    for (i = m; i <= n; i += 2) 
    {
        Goldbach(i);
        cnt++;
        if (cnt % 5) 
        {
            printf(", ");
        } 
        else 
        {
            printf("\n");
        }
    }
    return 0;
}

// 判断是否为素数
int prime(int p) 
{
    if (p < 2) 
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(p); i++) 
    {
        if (p % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

// 验证哥德巴赫猜想
void Goldbach(int n) 
{
    for (int p = 3; p <= n / 2; p += 2) 
    {
        int q = n - p;
        if (prime(p) && prime(q)) 
        {
            printf("%d=%d+%d", n, p, q);
            return;
        }
    }
}