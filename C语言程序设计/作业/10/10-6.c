#include <stdio.h>
#include <math.h>

int IsSquare(int n);

int main(void) 
{
    int n;
    scanf("%d", &n);
    if (IsSquare(n)) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    return 0;
}

// 判断整数是否为完全平方数
int IsSquare(int n) 
{
    int root = (int)sqrt(n);
    return root * root == n;
}