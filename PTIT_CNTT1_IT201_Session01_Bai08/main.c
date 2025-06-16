#include <stdio.h>

int freqMax(int arr[], int n) {
    int count[1001] = {0};  // mảng đánh dấu tần suất (giá trị từ 0–1000)

    // Đếm tần suất
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Tìm phần tử có tần suất lớn nhất
    int maxCount = 0;
    int result = -1;
    for (int i = 0; i <= 1000; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            result = i;
        }
    }
    return result;
}
int main() {
    int arr[] = {2, 3, 2, 5, 2, 3, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mostFreq = freqMax(arr, n);
    printf("Phan tu xuat hien nhieu nhat: %d\n", mostFreq);
    return 0;
}
//Độ phức tạp thời gian là: O(n)
//Độ phức tạp không gian là: O(1)
