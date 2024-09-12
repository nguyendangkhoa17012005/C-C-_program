#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        bool found = true;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << A[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
