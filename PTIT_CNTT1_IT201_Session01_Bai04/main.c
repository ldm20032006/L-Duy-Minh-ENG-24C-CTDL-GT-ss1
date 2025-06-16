//Cach 1
#include <stdio.h>
int sumLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
//Độ phức tạp thời gian là: O(n)
//Độ phức tạp không gian là: O(1)


//Cach 2
#include <stdio.h>

int sumFormula(int n) {
    return n * (n + 1) / 2;
}
//Độ phức tạp thời gian là: O(1)
//Độ phức tạp không gian là: O(1)
