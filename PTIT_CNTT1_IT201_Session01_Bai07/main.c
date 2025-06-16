//Cach 1
#include <stdio.h>
#include <stdbool.h>

bool checkDuplicateBruteForce(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[] = {5, 2, 8, 7, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkDuplicateBruteForce(arr, n))
        printf("Mang co phan tu trung lap.\n");
    else
        printf("Mang khong co phan tu trung lap.\n");

    return 0;
}
//Độ phức tạp thời gian: O(n^2)
//Độ phức tạp không gian: O(1)



//Cach 2
// #include <stdio.h>
// #include <stdbool.h>
//
// bool checkDuplicateWithMarking(int arr[], int n) {
//     int mark[1001] = {0}; // Tạo mảng đánh dấu từ 0 đến 1000
//
//     for (int i = 0; i < n; i++) {
//         if (mark[arr[i]] == 1) {
//             return true;
//         }
//         mark[arr[i]] = 1;
//     }
//     return false;
// }
// int main() {
//     int arr[] = {5, 2, 8, 7, 3, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     if (checkDuplicateWithMarking(arr, n))
//         printf("Mang co phan tu trung lap.\n");
//     else
//         printf("Mang khong co phan tu trung lap.\n");
//
//     return 0;
// }
//Độ phức tạp thời gian: O(n)
//Độ phức tạp không gian: O(1) - Giới hạn đầu vào là cố định