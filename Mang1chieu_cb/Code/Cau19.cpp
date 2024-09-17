#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Lật ngược mảng
    for (int i = 0; i < N / 2; ++i) {
        int temp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = temp;
    }

    // In ra mảng đã lật ngược
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
