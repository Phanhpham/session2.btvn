#include <stdio.h>
#include <stdlib.h>

// Khai báo nguyên mẫu hàm
void insertElementArray(int **pArray, int *n, int position, int value);
void deleteElementArray(int **pArray, int *n, int position);

int main()
{
    // Mảng động
    int n;
    int *pArray = NULL;
    int position, value, choice;

    // Nhập số phần tử của mảng
    printf("Moi ban nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ động
    pArray = (int *)malloc(n * sizeof(int));
    if (pArray == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return 1;
    }

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &pArray[i]);
    }

    do {
        // Menu lựa chọn
        printf("\nChon mot chuc nang:\n");
        printf("1. Chen phan tu\n");
        printf("2. Xoa phan tu\n");
        printf("3. Xuat mang\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            // Chèn phần tử
            printf("Nhap vi tri can chen: ");
            scanf("%d", &position);
            printf("Nhap gia tri can chen: ");
            scanf("%d", &value);
            insertElementArray(&pArray, &n, position, value);
            break;

        case 2:
            // Xóa phần tử
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &position);
            deleteElementArray(&pArray, &n, position);
            break;

        case 3:
            // In mảng
            printf("Mang hien tai:\n");
            for (int i = 0; i < n; i++) {
                printf("arr[%d] = %d\n", i, pArray[i]);
            }
            break;

        case 4:
            // Thoát
            printf("Thoat chuong trinh.\n");
            break;

        default:
            printf("Lua chon khong hop le. Vui long thu lai.\n");
        }

    } while (choice != 4);

    // Giải phóng bộ nhớ
    free(pArray);

    return 0;
}

// Triển khai hàm thêm phần tử
void insertElementArray(int **pArray, int *n, int position, int value)
{
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    // Cấp phát thêm bộ nhớ cho mảng
    *pArray = (int *)realloc(*pArray, (*n + 1) * sizeof(int));
    if (*pArray == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return;
    }

    // Dịch chuyển các phần tử từ vị trí cần chèn về phía sau
    for (int i = *n; i > position; i--) {
        (*pArray)[i] = (*pArray)[i - 1];
    }

    // Chèn giá trị tại vị trí cần chèn
    (*pArray)[position] = value;

    // Tăng số lượng phần tử
    (*n)++;
}

// Triển khai hàm xóa phần tử
void deleteElementArray(int **pArray, int *n, int position)
{
    if (position < 0 || position >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    // Dịch chuyển các phần tử sau vị trí cần xóa về trước
    for (int i = position; i < *n - 1; i++) {
        (*pArray)[i] = (*pArray)[i + 1];
    }

    // Giảm kích thước mảng
    *pArray = (int *)realloc(*pArray, (*n - 1) * sizeof(int));
    if (*pArray == NULL && *n - 1 > 0) {
        printf("Cap phat bo nho that bai sau khi xoa!\n");
        return;
    }

    (*n)--;
}
