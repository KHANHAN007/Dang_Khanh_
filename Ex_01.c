#include <stdio.h>

int main()
{
    int n = 100;

    for (int i = n; i >= 1;)
    {
        printf("%d ", i--);
    }
    // while (n)
    // {
    //     printf("%d ", n--);
    // }
    // do
    // {
    //     printf("%d ", n);
    // } while (--n);
}