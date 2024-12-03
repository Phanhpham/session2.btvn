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

    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

        printf("Mảng sau khi sắp xếp theo thứ tự tăng dần:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
