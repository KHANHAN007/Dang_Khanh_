#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // for (int i = 1; i <= 10; ++i)
    // {
    //     printf("%d * %2d = %d\n", n, i, n * i);
    // }

    int i = 1;
    while (i <= 10)
    {
        printf("%d * %2d = %d\n", n, i++, n * i);
    }
}