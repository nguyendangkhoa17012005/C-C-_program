#include<iostream>
#include<cmath>
using namespace std;

int max(long long n)
{
	if(n < 10)
		return n;
	else{
		return fmax(n % 10,max(n / 10));
	}
}
int min(long long n)
{
	if(n < 10)
		return n;
	else{
		return fmin(n % 10,min(n / 10));
	}
}
int main ()
{
	int n;
	cin >> n;
	cout << max(n) << " " << min(n);
}
