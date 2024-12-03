#include <stdio.h>

int main(void) 
{
    char str[80];
    char ch;
    int count = 0;

    // 读取字符串
    fgets(str, 80, stdin);

    // 读取字符
    scanf("%c", &ch);

    // 统计字符出现次数
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            count++;
        }
    }

    // 输出结果
    printf("%d\n", count);

    return 0;
}