#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    else{
        for (int i = 3; i <= sqrt(num); i += 2) 
        {
            if (num % i == 0) return false;
        }
    }
    
    return true;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int primeCount = 0;
    double primeSum = 0.0;

    for (int i = 0; i < N; i++) {
        if (isPrime(A[i])) {
            primeCount++;
            primeSum += A[i];
        }
    }

    cout << fixed << setprecision(3) << (double) primeSum / primeCount << endl;

    return 0;
}
