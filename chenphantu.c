// buoc 1:xác dinh vi tri can chen
// buoc 2:cấp phát bang mới
// buoc3:====từ vị trí cần chèn dịch chuyển các phần tử bên phải

// dau vao :
//+mang
//+vi tri
//+n(so phan tu cua mang)
//+gia tri can chen

// xu ly:
// buoc1:check xem vi tri truyen vao co hop le ko
//  if(position < 0 || position >= n)
//  return;
// buoc 2: cap phat mang moi
// buoc 3: dich chuyen ===>
//  buoc 4:tang n len 1
//==>dau ra mang moi

#include <stdio.h>
#include <stdlib.h>
void in(int *n);
int main()
{
    int n = 10;
    in(&n);
    printf("gia tri n %d", n);
    return 0;
}
void in(int *n)
{
    (*n)++;
}
