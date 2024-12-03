#include <stdio.h>

int f(int n);

int main(void) 
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}

int f(int n) 
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return f(n - 2) + f(n - 1);
    }
}