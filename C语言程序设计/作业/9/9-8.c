#include <stdio.h>
#include <string.h>

void print_pinyin(char digit);

int main(void) 
{
    char number[100];
    scanf("%s", number);

    int len = strlen(number);

    if (number[0] == '-') 
    {
        printf("fu ");
        for (int i = 1; i < len; i++) 
        {
            print_pinyin(number[i]);
            if (i < len - 1) 
            {
                printf(" ");
            }
        }
    } 
    else 
    {
        for (int i = 0; i < len; i++) 
        {
            print_pinyin(number[i]);
            if (i < len - 1) 
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}

void print_pinyin(char digit) 
{
    switch (digit) 
    {
        case '0': printf("ling"); break;
        case '1': printf("yi"); break;
        case '2': printf("er"); break;
        case '3': printf("san"); break;
        case '4': printf("si"); break;
        case '5': printf("wu"); break;
        case '6': printf("liu"); break;
        case '7': printf("qi"); break;
        case '8': printf("ba"); break;
        case '9': printf("jiu"); break;
    }
}