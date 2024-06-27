#include<iostream>
#include<cmath>

using namespace std;

long long S(int n)
{
	if(n == 0)
	return 0;
	else{
		if(n % 2 == 0)
		return n + S(n - 1);
		else 
		return -n + S(n - 1);
	}
	
	
}

int main ()
{
	int n;
	cin >> n;
	cout << S(n);
}
