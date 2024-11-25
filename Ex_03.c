#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n;)
    {
        sum += i++;
    }

    // while (n)
    // {
    //     sum += n--;
    // }

    // do
    // {
    //     sum += n;
    // } while (--n);

    printf("%d", sum);
}