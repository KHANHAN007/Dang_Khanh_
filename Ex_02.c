#include <stdio.h>

int main()
{
    int n = 5, i;
    printf("Nhap mot so: ");
    // do
    // {
    //     scanf("%d", &i);
    //     if (i != n)
    //         printf("Nhap sai. Nhap lai:");
    // } while (i != n);
    // printf("Nhap dung.");

    // while (i != n)
    // {
    //     scanf("%d", &i);
    //     if (i != n)
    //         printf("Nhap sai. Nhap lai:");
    // }
    // printf("Nhap dung.");

    for (;;)
    {
        scanf("%d", &i);
        if (i == n)
            break;
        else
            printf("Nhap sai. Nhap lai: ");
    }
    printf("Nhap dung.");
}