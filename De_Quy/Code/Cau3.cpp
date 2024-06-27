#include<iostream>

using namespace std;

long long S(int n)
{
	if(n == 0)
	return 0;
	else
	return n*n*n + S(n - 1);
}

int main ()
{
	int n;
	cin >> n;
	cout << S(n);
}
