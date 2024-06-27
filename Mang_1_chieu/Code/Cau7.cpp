#include<iostream>
#define ll long long
using namespace std;
int n, a[1000];
ll gcd(ll a, ll b)
{
	if (b == 0)
	return a;
	else return gcd(b, a % b);
}
int main ()
{
	cin >> n;
	ll uc = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		uc = gcd(uc, a[i]);
	}
	cout << uc;
}
