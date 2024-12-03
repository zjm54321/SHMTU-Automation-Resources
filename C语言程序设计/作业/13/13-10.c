#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_id(const char *id);

int main(void) 
{
    int n;
    scanf("%d", &n);

    char ids[n][19];
    int all_passed = 1;

    // 读取 n 个身份证号码
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", ids[i]);
    }

    // 检查每个身份证号码
    for (int i = 0; i < n; i++) 
    {
        if (!check_id(ids[i])) 
        {
            printf("%s\n", ids[i]);
            all_passed = 0;
        }
    }

    if (all_passed) 
    {
        printf("All passed\n");
    }

    return 0;
}

int check_id(const char *id) 
{
    int weights[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char check_map[] = "10X98765432";
    int sum = 0;

    // 检查前17位是否全为数字
    for (int i = 0; i < 17; i++) 
    {
        if (!isdigit(id[i])) 
        {
            return 0;
        }
        sum += (id[i] - '0') * weights[i];
    }

    // 计算校验码
    int z = sum % 11;
    char check_code = check_map[z];

    // 检查最后一位校验码是否正确
    return id[17] == check_code;
}