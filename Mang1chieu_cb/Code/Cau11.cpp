#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số Fibonacci
bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(long long n) {
    // Kiểm tra nếu 5*n^2 + 4 hoặc 5*n^2 - 4 là số chính phương
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int N;
    cin >> N;
    long long A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (isFibonacci(A[i])) {
            cout << A[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "NONE";
    }

    return 0;
}
