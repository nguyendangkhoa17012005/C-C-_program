#include<iostream>
#define ll long long
using namespace std;

int n, a[1000];
int fn;
ll Fibo(ll a)
{
	if(n == 1)
	return 0;
	if(n == 2)
	return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if(Fibo(a[i]))
		{
			cout << a[i] << " ";
			cnt++;
		}
	}
	if(cnt == 0)
	cout << "NONE";
}
