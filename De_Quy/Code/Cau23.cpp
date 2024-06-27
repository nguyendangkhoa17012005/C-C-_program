#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int chan(int a[], int n)
{
	if(n == 1)
	{
		if(a[0] % 2 == 0)
		return 1;
		return 0;
	}
	else
	{
		if(a[n - 1] % 2 == 1) return 0;
		else return chan(a, n -1);	
	}
}
int main ()
{
	int n, a[1000];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if(chan(a,n))
	cout << "YES";
	else cout << "NO";
}
