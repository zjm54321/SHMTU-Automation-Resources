#include <stdio.h>

// 主函数，程序的入口点，返回值为 int 型
int main(void) 
{
    int H; // 身高
    // 输入身高
    scanf("%d", &H);
    // 计算标准体重
    float Z = (H - 100) * 1.8;
    // 输出标准体重
    printf("%.1f\n", Z);
    return 0; // 返回 0，表示程序正常结束
}