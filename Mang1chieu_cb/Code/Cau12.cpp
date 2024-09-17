#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minValue = A[0], maxValue = A[0];
    int minIndex = 0, maxIndex = 0;

    // Tìm giá trị nhỏ nhất và lớn nhất
    for (int i = 1; i < N; ++i) {
        if (A[i] <= minValue) {
            minValue = A[i];
            minIndex = i;
        }
        if (A[i] > maxValue) {
            maxValue = A[i];
            maxIndex = i;
        }
    }

    cout << minIndex << " " << maxIndex << endl;

    return 0;
}
