#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int a[100000], b[10000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for(int i = n - 1; i >= p; i--)
    {
        a[m + i] = a[i];
    }
    for(int i = 0; i < m; i++)
    {
        a[p + i] = b[i];
    }
    for(int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}