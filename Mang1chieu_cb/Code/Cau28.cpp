#include <iostream>
using namespace std;

int cnt[1000001];

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int find  = 0;
    for(int i = 0; i < n; i++)
    {
        if(cnt[a[i]] != 0)
        {
            cout << a[i] << " " << cnt[a[i]] << endl;
            cnt[a[i]] = 0;
        }
    }
    return 0;
}