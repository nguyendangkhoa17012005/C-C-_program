#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    bool found = false;
    for (int i = 0; i < N; i += 2) {
        if (A[i] % 2 == 0) {
            cout << A[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "NONE";
    }

    cout << endl;
    return 0;
}
