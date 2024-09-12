#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> X;

    int countLess = 0, countGreater = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < X) {
            countLess++;
        } else if (A[i] > X) {
            countGreater++;
        }
    }

    cout << countLess << endl;
    cout << countGreater << endl;

    return 0;
}
