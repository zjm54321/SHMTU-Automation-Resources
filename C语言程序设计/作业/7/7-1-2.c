#include <stdio.h>

int main(void) 
{
    int i = 1, sum = 0;
    while (i <= 100) {
        sum += i; // 累加当前整数
        i++; // 递增i
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum); // 输出结果
    return 0; // 返回0，表示程序正常结束
}