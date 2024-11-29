#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int target;
    int i;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            break; 
        }
    }
    if (i == n) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}


