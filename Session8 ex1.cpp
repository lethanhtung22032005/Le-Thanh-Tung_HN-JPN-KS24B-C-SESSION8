#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu cua mang theo thu tu nguoc la:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
