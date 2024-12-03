#include <stdio.h>
#include <math.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main(void) 
{
    int m, n;
    scanf("%d %d", &m, &n);
    if (narcissistic(m)) 
    {
        printf("%d is a narcissistic number\n", m);
    }
    PrintN(m, n);
    if (narcissistic(n)) 
    {
        printf("%d is a narcissistic number\n", n);
    }
    return 0;
}

// 判断一个数是否为水仙花数
int narcissistic(int number) 
{
    int sum = 0, temp = number;
    int digits[3];

    // 提取每一位数��
    for (int i = 0; i < 3; i++) 
    {
        digits[i] = temp % 10;
        temp /= 10;
    }

    // 计算每位数字的立方和
    for (int i = 0; i < 3; i++) 
    {
        sum += pow(digits[i], 3);
    }

    // 判断立方和是否等于原数
    return sum == number;
}

// 打印区间内所有水仙花数
void PrintN(int m, int n) 
{
    for (int i = m + 1; i < n; i++) 
    {
        if (narcissistic(i)) 
        {
            printf("%d\n", i);
        }
    }
}