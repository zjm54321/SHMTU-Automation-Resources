#include <stdio.h>

// 主函数，程序的入口点，返回值为 int 型
int main(void) 
{
    int z = 473;
    int c = z / 100; // 计算百位数
    int b = (z / 10) % 10; // 计算十位数
    int a = z % 10; // 计算个位数
    // 输出分解结果
    printf("473 = %d + %d * 10 + %d * 100\n", a, b, c);
    return 0; // 返回 0，表示程序正常结束
}