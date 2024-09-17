#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i <= N - K; ++i) {
        int sum = 0;
        for (int j = 0; j < K; ++j) {
            sum += A[i + j];
        }
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
