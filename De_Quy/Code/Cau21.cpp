#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int dx(int a[], int l, int r)
{
	if(l >= r)
		return 1;
	else
	{
		if(a[l] =! a[r])
		return 0;
		else
			return dx(a,l + 1, r - 1);
	}
}
int main()
{
	int n, a[1000];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if(dx(a, 0, n - 1))
	cout << "YES";
	else cout << "NO";
}
