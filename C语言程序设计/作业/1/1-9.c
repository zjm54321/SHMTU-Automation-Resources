#include <stdio.h>

// 主函数，程序的入口点，返回值为 int 型
int main(void) 
{
    int math = 92, phy = 71, comp = 89;
    int sum = math + phy + comp;
    // 输出各科成绩和平均成绩
    printf("math=%d, phy=%d, comp=%d, average=%d\n", math, phy, comp, sum / 3);
    return 0; // 返回 0，表示程序正常结束
}