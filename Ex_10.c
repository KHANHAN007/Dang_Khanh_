#include <stdio.h>

void swap(int n)
{
    if (n != 0)
    {
        // printf("%d\t", n % 10);
        swap(n / 10);
        printf("%d\t", n % 10);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    // int reversed = 0;
    // while (n != 0)
    // {
    //     reversed = reversed * 10 + n % 10;
    //     n /= 10;
    // }
    // while (reversed != 0)
    // {
    //     printf("%d\t", reversed % 10);
    //     reversed /= 10;
    // }
    swap(n);
}
