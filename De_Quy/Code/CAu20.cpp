#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

ll F(ll n)
{
	int cnt = 0;
	if( n == 1){
		return 0;
	}
	else
	{
		int res1 =  INT_MAX, res2 = INT_MAX, res3 = INT_MAX;
		if(n % 2 == 0)
		res1 = F(n / 2) + 1;
		if (n % 3 == 0)
		res2 = F(n / 3) + 1;
		if(n > 1)
		res3 = F(n -1) + 1;
		return fmin(res1, fmin(res2, res3));
	}
}

int main ()
{
	int n;
	cin >> n;
	cout << F(n);
}

