#include <iostream>
#include <climits>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    bubbleSort(A, N);
    int minDiff = INT_MAX;
    for (int i = 0; i < N - 1; i++) {
        int diff = A[i + 1] - A[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    cout << minDiff << endl;
    return 0;
}
