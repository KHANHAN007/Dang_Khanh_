#include <stdio.h>

// int gcd(int a, int b)
// {
//     int tmp;
//     while (b != 0)
//     {
//         tmp = b;
//         b = a % b;
//         a = tmp;
//     }
//     return tmp;
// }

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", (a * b) / gcd(a, b));
}