#include <iostream>
using namespace std;

// Hàm tính GCD của hai số
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = A[0];
    for (int i = 1; i < N; ++i) {
        result = gcd(result, A[i]);
        if (result == 1) {
            break; // Nếu GCD là 1, không cần tính tiếp
        }
    }

    cout << result << endl;

    return 0;
}
