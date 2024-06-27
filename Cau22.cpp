#include<iostream>
#include<cmath>

using namespace std;
void in1(int a[], int n)
{
	if(n != 0)
	{
		cout << a[n - 1] << " ";
	in1(a,n - 1);
	}
}
void in2(int a[], int n)
{
	if(n != 0)
	{
		in2(a,n - 1);
		cout << a[n - 1] << " ";
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
	in2(a,n);
	cout << endl;
	in1(a,n);
}
