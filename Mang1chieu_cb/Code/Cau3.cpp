#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minValue = INT_MAX;
    int minCount = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < minValue) {
            minValue = A[i];
            minCount = 1;
        } else if (A[i] == minValue) {
            minCount++;
        }
    }

    cout << minCount << endl;

    return 0;
}
