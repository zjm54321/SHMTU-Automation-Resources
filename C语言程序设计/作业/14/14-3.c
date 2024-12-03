#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char str[50];
    int i = 0;

    // 读取字符串，直到遇到 '#'
    while ((str[i] = getchar()) != '#') 
    {
        i++;
    }
    str[i] = '\0'; // 结束字符串

    // 转换大小写
    for (int j = 0; str[j] != '\0'; j++) 
    {
        if (islower(str[j])) 
        {
            str[j] = toupper(str[j]);
        } 
        else if (isupper(str[j])) 
        {
            str[j] = tolower(str[j]);
        }
    }

    // 输出结果
    printf("%s\n", str);

    return 0;
}