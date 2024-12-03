#include <stdio.h>
#include <math.h>

int main(void) 
{
    float x;
    scanf("%f", &x); // 从标准输入读取一个浮点数，赋值给x

    if (x == 0) {
        printf("f(0.0)=0.0\n"); // 如果x等于0，输出f(0.0)=0.0
    } else {
        float y = 1 / x; // 计算1/x
        printf("f(%.1f)=%.1f\n", x, y); // 输出x及其倒数，保留一位小数
    }

    return 0; // 返回0，表示程序正常结束
}
