#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            evenCount++;
            evenSum += A[i];
        } else {
            oddCount++;
            oddSum += A[i];
        }
    }

    cout << evenCount << endl;
    cout << oddCount << endl;
    cout << evenSum << endl;
    cout << oddSum << endl;

    return 0;
}
