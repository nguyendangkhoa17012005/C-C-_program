#include<iostream>
#define ll long long
using namespace std;

void in(ll n)
{
	if( n < 10){
		cout << n;
	}
	else {
		cout << n % 10 << " ";
		in(n /10);
	}
}

void in2(ll n)
{
	if(n < 10)
	cout << n << " ";
	else {
		in2(n / 10);
		cout << n % 10 << " ";
	}
}
int main ()
{
	int n;
	cin >> n;
	in(n);
	cout << endl;
	in2(n);
}

