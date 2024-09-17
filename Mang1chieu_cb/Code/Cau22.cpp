#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int index = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "NOT FOUND" << endl;
    } else {
        for (int i = index; i < N - 1; ++i) {
            A[i] = A[i + 1];
        }
        N--; // Giảm kích thước mảng sau khi xóa phần tử

        for (int i = 0; i < N; ++i) {
            cout << A[i] << " ";
        }
    }

    return 0;
}
