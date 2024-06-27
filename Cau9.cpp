#include<iostream>
#include<cmath>
const int mod = 1000000007;
using namespace std;

long long lthua(long long a, long long b)
{
	if(b == 0)
	return 1;
	long long tmp = lthua(a, b / 2);
	if (b % 2 == 0)
		return (tmp % mod) * (tmp % mod) % mod;
	else 
		return (tmp % mod) * (tmp % mod) * (a % mod) % mod;
	
}

int main ()
{
	int a, b;
	cin >> a >> b;
	cout << lthua(a,b);
}
