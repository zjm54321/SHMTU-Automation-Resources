#include <stdio.h>

int main(void) 
{
    float e, f, g, h;
    scanf("%f %f %f %f", &e, &f, &g, &h); // 从标准输入读取四个浮点数
    float Sum = e + f + g + h; // 计算四个数的和
    float Average = Sum / 4; // 计算平均值
    printf("Sum=%.0f;Average=%.1f\n", Sum, Average); // 输出和与平均值，保留相应的小数位
    return 0; // 返回0，表示程序正常结束
}
