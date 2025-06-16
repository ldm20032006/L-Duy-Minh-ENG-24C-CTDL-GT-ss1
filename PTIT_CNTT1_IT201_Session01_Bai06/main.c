#include <stdio.h>

int main() {
    int arr[] = {3, 5, 2, 3, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;  // Phần tử cần đếm
    int count = 0;

    // Đếm số lần xuất hiện của x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("So lan xuat hien cua %d la: %d\n", x, count);

    return 0;
}
//Độ phức tạp thời gian O(n)
//Độ phức tạp không gian O(1)