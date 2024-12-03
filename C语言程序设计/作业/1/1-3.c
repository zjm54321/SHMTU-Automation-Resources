#include <stdio.h>

int main(void)       //定义主函数，返回值为int型
{	                // 函数体开始标志
    char str[] = "I Love CHINA"; // 定义字符串
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]); // 逐个字符输出并换行
    }
    return 0;       // 函数执行完毕，返回函数值0
}                // 函数结束标志
