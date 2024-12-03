#include <stdio.h>

int main(void) 
{
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i; // 累加1到100的整数
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n", sum); // 输出结果
    return 0; // 返回0，表示程序正常结束
}