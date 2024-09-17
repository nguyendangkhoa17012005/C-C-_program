#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    long long sum = 0;
    long long product = 1;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        sum = (sum + x) % MOD;
        product = (product * x) % MOD;
    }
    cout << sum << endl;
    cout << product << endl;
    return 0;
}
