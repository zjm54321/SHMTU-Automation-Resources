#include <stdio.h>

int main(void) 
{
    int sum = 0;
    for (int i = 2; i <= 100; i += 2) {
        sum += i; // 累加2到100的偶数
    }
    printf("2 + 4 + 6 + ... + 100 = %d\n", sum); // 输出结果
    return 0; // 返回0，表示程序正常结束
}