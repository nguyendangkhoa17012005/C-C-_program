#include<iostream>
#include<cmath>
#define ll long long
using namespace std;
int chan(int a[], int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		if(a[n - 1] <= a[n - 2]) return 0;
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
