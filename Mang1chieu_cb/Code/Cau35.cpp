#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N], B[N-1];
    
    // Nhập mảng A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Nhập mảng B
    for (int i = 0; i < N-1; i++) {
        cin >> B[i];
    }
    
    // Khởi tạo kết quả với phần tử đầu tiên của mảng A
    int result = A[0];
    
    // Thực hiện các phép tính theo mảng B
    for (int i = 0; i < N-1; i++) {
        if (B[i] == 1) {
            result += A[i+1]; // Phép cộng
        } else if (B[i] == 2) {
            result -= A[i+1]; // Phép trừ
        }
    }
    
    // In ra kết quả
    cout << result << endl;
    
    return 0;
}
