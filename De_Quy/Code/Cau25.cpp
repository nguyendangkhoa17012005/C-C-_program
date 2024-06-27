#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int bina(int a[], int l, int r, int x)
{
	if(l < r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == x)
		return 1;
		else if (a[mid] < x) return bina(a,mid + 1, r, x);
		else return bina(a, l, mid - 1, x);
	}
	else
		return 0;
}
int main ()
{
	int n, a[1000];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int x; 
	cin >> x;
	if(bina(a, 0, n - 1, x))
	cout << "1";
	else cout << "0";
}
