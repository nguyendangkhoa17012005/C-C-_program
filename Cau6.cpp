#include<iostream>
#include<cmath>

using namespace std;

int Fibo(int n)
{
	if(n == 1)
	return 0;
	if(n == 2)
	return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main ()
{
	int n;
	cin >> n;
	cout << Fibo(n);
}
