#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str[80];

    // 读取字符串
    fgets(str, 80, stdin);

    // 去掉字符串末尾的换行符
    str[strcspn(str, "\n")] = '\0';

    // 获取字符串长度
    int len = strlen(str);

    // 逆序输出字符串
    for (int i = len - 1; i >= 0; i--) 
    {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}