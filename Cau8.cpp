#include<iostream>
#define ll long long
using namespace std;

long long gcd(ll a, ll b)
{
	if(b == 0)
	return a;
	else{
		return gcd(b, a % b);
	}
}

long long bcnn(ll a, ll b)
{
	return a / gcd(a,b) * b;
}

int main ()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) << " " << bcnn(a,b);
}
