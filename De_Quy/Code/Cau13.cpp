#include<iostream>

using namespace std;
int sum = 0;
int Sum(long long n)
{
	
	if(n < 10)
	return n;
	else 
	{
		return n % 10 + Sum(n / 10);
	}
}

int main ()
{
	int n;
	cin >> n;
	cout << Sum(n);
}
