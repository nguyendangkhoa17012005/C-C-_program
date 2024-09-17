#include <iostream>
using namespace std;

int main() {
    int A[10000];
    int n = 0;
    int num;

    // Đọc các số từ đầu vào cho đến khi không còn số nào
    while (cin >> num) {
        A[n++] = num;
        if(num==-1) break;
    }

    int even_count = 0, odd_count = 0;

    // Đếm số lượng số chẵn và số lẻ
    for (int i = 0; i < n - 1; ++i) {
        if (A[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Xác định loại mảng
    if (even_count > odd_count) {
        cout << "CHAN" << endl;
    } else if (odd_count > even_count) {
        cout << "LE" << endl;
    } else {
        cout << "CHANLE" << endl;
    }

    return 0;
}
