#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so nguyen n (kich thuoc ma tran vuong): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Kich thuoc ma tran khong hop le.\n");
        return 1; 
    }
    int matrix[n][n];
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vuong la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

