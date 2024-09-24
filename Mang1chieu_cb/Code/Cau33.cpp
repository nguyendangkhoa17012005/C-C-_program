#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    // Tạo mảng tạm để lưu các phần tử sau khi xoay
    int temp[n];
    
    // Tính vị trí bắt đầu mới sau khi xoay
    int start = n - (k % n);
    
    // Sao chép các phần tử từ vị trí start đến cuối mảng vào mảng tạm
    for (int i = 0; i < n - start; i++) {
        temp[i] = arr[start + i];
    }
    
    // Sao chép các phần tử từ đầu mảng đến vị trí start vào mảng tạm
    for (int i = 0; i < start; i++) {
        temp[n - start + i] = arr[i];
    }
    
    // Sao chép lại các phần tử từ mảng tạm vào mảng gốc
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Gọi hàm xoay mảng
    rotateRight(arr, n, k);
    
    // In ra mảng sau khi xoay
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
