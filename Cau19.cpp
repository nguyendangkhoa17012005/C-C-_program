#include<iostream>
#define ll long long
using namespace std;

ll chan(int n)
{
	if (n < 10)
	{
		if(n % 2 == 0)
		return 1;
		else return 0;
	}
	else
	{
		if(n % 10 % 2 == 1)	
			return 0;
		else 
			return chan(n / 10);
	}
}

int main ()
{
	int n;
	cin >> n;
	if(chan(n))
	cout << "YES";
	else cout << "NO";
}

