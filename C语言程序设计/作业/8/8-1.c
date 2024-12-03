#include <stdio.h>

int main(void) 
{
    int year;
    scanf("%d", &year);

    // 检查输入年份是否为21世纪的年份
    if (year < 2001 || year > 2100) 
    {
        printf("Invalid year!\n");
        return 0;
    }

    int found = 0;

    // 输出21世纪中截止到输入年份的所有闰年年份
    for (int i = 2001; i <= year; i++) 
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
        {
            printf("%d\n", i);
            found = 1;
        }
    }

    if (!found) 
    {
        printf("None\n");
    }

    return 0;
}