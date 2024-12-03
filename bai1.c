#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int max;

    do
    {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
        if (n <= 0 || n > 100)
        {
            printf("So phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while (n <= 0 || n > 100);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Phan tu co gia tri lon nhat trong mang la: %d\n", max);

    return 0;
}
