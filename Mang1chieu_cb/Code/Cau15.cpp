#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    cout << firstMax << " " << secondMax << endl;

    return 0;
}
