#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Hàm kiểm tra số thuận nghịch
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

// Hàm kiểm tra số chính phương
bool isPerfectSquare(int num) {
    int s = sqrt(num);
    return s * s == num;
}

// Hàm tính tổng các chữ số
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int primeCount = 0, palindromeCount = 0, perfectSquareCount = 0, primeDigitSumCount = 0;

    for (int i = 0; i < N; ++i) {
        if (isPrime(A[i])) primeCount++;
        if (isPalindrome(A[i])) palindromeCount++;
        if (isPerfectSquare(A[i])) perfectSquareCount++;
        if (isPrime(sumOfDigits(A[i]))) primeDigitSumCount++;
    }

    cout << primeCount << endl;
    cout << palindromeCount << endl;
    cout << perfectSquareCount << endl;
    cout << primeDigitSumCount << endl;

    return 0;
}
