#include <stdio.h>
#include <math.h>

int search(int n);

int main(void) 
{
    int number;
    scanf("%d", &number);
    printf("count=%d\n", search(number));
    return 0;
}

int search(int n) 
{
    int count = 0;
    for (int i = 11; i * i <= n; i++) {
        int square = i * i;
        if (square >= 100 && square <= n) {
            int digits[3];
            digits[0] = square / 100;
            digits[1] = (square / 10) % 10;
            digits[2] = square % 10;
            if (digits[0] == digits[1] || digits[0] == digits[2] || digits[1] == digits[2]) {
                count++;
            }
        }
    }
    return count;
}