#include <stdio.h>

int main(void) 
{
    int A, a;
    scanf("%d %d", &A, &a); // 从标准输入读取两个整数，分别赋值给A和a
    float z = A * a * 0.1f; // 计算A和a的乘积的10%
    printf("%.2f\n", z); // 输出z，保留两位小数
    return 0; // 返回0，表示程序正常结束
}
