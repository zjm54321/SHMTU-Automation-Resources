#include <stdio.h>
#include <math.h>

int main(void) 
{
    int money, year;
    double rate;
    scanf("%d %d %lf", &money, &year, &rate); // 从标准输入读取本金、年数和利率

    double a = pow(1 + rate, year); // 计算(1 + rate)的year次方
    double interest = money * a - money; // 计算利息

    printf("interest=%.2lf\n", interest); // 输出利息，保留两位小数

    return 0; // 返回0，表示程序正常结束
}