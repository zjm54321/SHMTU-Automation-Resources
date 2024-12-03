#include <stdio.h>
#include <math.h>

int main(void) 
{
    float x;
    scanf("%f", &x); // 从标准输入读取一个浮点数，赋值给x

    if (x > 15) {
        float y = 2.5f * x - 17.5f; // 计算2.5*x - 17.5
        printf("%.2f\n", y); // 输出结果，保留两位小数
    } else {
        float z = 4.0f * x / 3.0f; // 计算4*x/3
        printf("%.2f\n", z); // 输出结果，保留两位小数
    }

    return 0; // 返回0，表示程序正常结束
}
