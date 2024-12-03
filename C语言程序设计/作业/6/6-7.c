#include <stdio.h>
#include <math.h>

int main(void) 
{
    float x;
    scanf("%f", &x); // 从标准输入读取一个浮点数，赋值给x
    printf("|%.1f| = %.1f\n", x, fabs(x)); // 输出x及其绝对值，保留一位小数
    return 0; // 返回0，表示程序正常结束
}