#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        int leftSum = 0, rightSum = 0;

        // Tính tổng các phần tử bên trái i
        for (int j = 0; j < i; ++j) {
            leftSum += A[j];
        }

        // Tính tổng các phần tử bên phải i
        for (int j = i + 1; j < N; ++j) {
            rightSum += A[j];
        }

        // Kiểm tra nếu cả hai tổng đều là số nguyên tố
        if (isPrime(leftSum) && isPrime(rightSum)) {
            cout << i << " ";
        }
    }

    return 0;
}
