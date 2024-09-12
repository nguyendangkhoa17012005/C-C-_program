#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> K;

    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == K) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
