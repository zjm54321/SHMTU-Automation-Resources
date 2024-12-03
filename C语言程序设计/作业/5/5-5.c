#include <stdio.h>
#include <math.h>

int main(void) 
{
    float x;
    scanf("%f", &x); // 从标准输入读取一个浮点数，赋值给x

    if (x >= 0) {
        float y = sqrt(x); // 计算x的平方根
        printf("f(%.2f)=%.2f\n", x, y); // 输出x及其平方根，保留两位小数
    } else {
        float z = pow(x + 1, 2); // 计算(x + 1)的平方
        float a = z + 2 * x + 1 / x; // 计算表达式的值
        printf("f(%.2f)=%.2f\n", x, a); // 输出x及其计算结果，保留两位小数
    }

    return 0; // 返回0，表示程序正常结束
}