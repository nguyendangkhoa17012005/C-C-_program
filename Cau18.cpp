#include<iostream>
#define ll long long
using namespace std;

ll tongchan(int n)
{
	if (n < 10)
	{
		if(n % 2 == 0)
		return n;
		else return 0;
	}
	else
	{
		if(n % 10 % 2 == 0)	
			return n % 10 + tongchan(n / 10);
		else 
			return tongchan(n / 10);
	}
}
ll tongle(int n)
{
	if (n < 10)
	{
		if(n % 2 == 0)
		return 0;
		else return n;
	}
	else
	{
		if(n % 10 % 2 == 0)	
			return tongle(n / 10);
		else 
			return n % 10 + tongle(n / 10);
	}
}
int main ()
{
	int n;
	cin >> n;
	cout << tongchan(n) << endl << tongle(n);
}

