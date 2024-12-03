#include <stdio.h>

int main()
{
    int n;

    printf("Nhập số lượng phần tử n (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    int arr[n];

    printf("Nhập các phần tử trong mảng:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Mảng sau khi đảo ngược:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
