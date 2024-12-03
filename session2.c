#include <stdio.h>

int main()
{
    // khai bao mang 1 chieu
    int array[5];
    int arrayInit[] = {1, 2, 3, 4};

    // truy cap phan tu mang thong qua chi muc(index)
    printf("array[%d]=", 0);
    scanf("%d",&array[0]);

    //in ra gia tri cua phan tu dtien trong mang array
    printf("gia tri phan tu dau tien %d",array[0]);

    //in ra gia tri thu 3 cua mang arrayInit 
    printf("in gia tri thu 3 cua mang arrayInit %d",arrayInit[2]);

    //nhap xuat vs mang ket hop vong lap for(i)
    for(int i =0;i<3;i++){
        printf("array[%d]=%d",i,arrayInit[i]);
    }
    //nhap cac gia cho phan tu mang array
    for(int i =0;i<5;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&array[i]);
    }
    //hien thi cac gia phan tu mang array 
    printf("hien thi cac gia tri phan tu mang array");
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d]=%d",i,array[i]);
    }
    
    return 0;
}