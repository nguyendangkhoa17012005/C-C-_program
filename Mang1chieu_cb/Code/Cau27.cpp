#include <iostream>
using namespace std;

int cnt[1000001];

int main() {
    int n;
    cin >> n;
    int a[n];
    int max = -1e9;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        if(a[i] > max) 
        max = a[i];
    }
    int find  = 0;
    for(int i = 0; i <= max; i++)
    {
        if(cnt[i] != 0)
        cout << i << " " << cnt[i] << endl;
    }
    return 0;
}