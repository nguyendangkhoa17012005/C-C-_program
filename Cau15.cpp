#include<iostream>

using namespace std;

int F(long long n)
{
	if(n < 10)
		return n;
	else
		return F(n / 10);
}

int main ()
{
	int n;
	cin >> n;
	cout << F(n);
}
