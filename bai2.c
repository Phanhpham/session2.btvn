#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int x;
    int count = 0;

    do
    {
        printf("nhap so phan tu cua mang: ");
        scanf("%d", &n);
        if (n < 0 || n >= 100)
        {
            printf("so phan tu ko hop le.vui long nhap lai: ");
        }

    } while (n < 0 || n >= 100);
    printf("nhap cac phan tu cua mang:");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("nhap so x de dem la : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)

    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("So %d xuat hien %d lan trong mang", x, count);
    return 0;
}