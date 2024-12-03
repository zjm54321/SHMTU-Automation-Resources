#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main(void) 
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));		
    printf("s = %d\n", SumA(a, n));	
    return 0;
}

// 返回 n 个 a 组成的数字
int fn(int a, int n) 
{
    int result = 0;
    for (int i = 0; i < n; i++) 
    {
        result = result * 10 + a;
    }
    return result;
}

// 返回 a + aa + aaa + ... + aa...a (n 个 a) 的和
int SumA(int a, int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) 
    {
        sum += fn(a, i);
    }
    return sum;
}