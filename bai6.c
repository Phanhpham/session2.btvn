#include <stdio.h>

int main()
{
    int n, m;
    int arr1[n];
    int arr2[m];

    printf("Nhập số lượng phần tử của mảng 1 (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000)
    {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    printf("Nhập các phần tử mảng 1:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Nhập số lượng phần tử của mảng 2 (0 < m <= 1000): ");
    scanf("%d", &m);

    if (m <= 0 || m > 1000)
    {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    printf("Nhập các phần tử mảng 2:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[n + m];

    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }

    printf("Mảng sau khi gộp hai mảng:\n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
