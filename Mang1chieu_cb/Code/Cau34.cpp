#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    
    // Nhập mảng A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Tạo mảng kết quả với kích thước tối đa là N
    int result[N];
    int j = 0; // Chỉ số cho mảng kết quả
    
    // Thêm phần tử đầu tiên vào mảng kết quả
    result[j++] = A[0];
    
    // Duyệt qua mảng A và thêm các phần tử không trùng lặp liền kề vào mảng kết quả
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i - 1]) {
            result[j++] = A[i];
        }
    }
    
    // In ra mảng kết quả
    for (int i = 0; i < j; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
