#include <stdio.h>

int main()
{
    int n, k, i, j;
    int found = 0;
    printf("Nhập số lượng phần tử n (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    int arr[n];

    printf("Nhập các phần tử trong mảng:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Nhập phần tử cần xóa k: ");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            for (j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            found = 1;
            break;
        }
    }

    if (found)
    {

        printf("Mảng sau khi xóa phần tử %d:\n", k);
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Không tìm thấy phần tử %d trong mảng.\n", k);
    }

    return 0;
}
