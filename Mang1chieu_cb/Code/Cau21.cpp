#include <iostream>
using namespace std;

int main() {
    int N, X, K;
    cin >> N >> X >> K;
    int A[N + 1]; // Tạo mảng với kích thước lớn hơn 1 để chứa phần tử mới

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Dịch chuyển các phần tử từ vị trí K trở đi sang phải một vị trí
    for (int i = N; i >= K; --i) {
        A[i] = A[i - 1];
    }

    // Chèn X vào vị trí K
    A[K - 1] = X;

    // In ra mảng sau khi chèn
    for (int i = 0; i <= N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
