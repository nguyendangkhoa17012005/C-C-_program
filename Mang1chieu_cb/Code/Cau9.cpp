#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        bool find = false;
        for (int j = 0; j < i; ++j) {
            if (A[i] == A[j]) {
                find = true;
                break;
            }
        }
        if (!find) {
            int count = 0;
            for (int j = i; j < N; ++j) {
                if (A[j] == A[i]) {
                    count++;
                }
            }
            cout << A[i] << " " << count << endl;
        }
    }

    return 0;
}
