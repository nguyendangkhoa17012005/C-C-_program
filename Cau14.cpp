#include<iostream>

using namespace std;

long long Sl(long long n)
{
	if(n < 10)
		return 1;	
	else{
		return 1 + Sl(n / 10);
	} 
}

int main ()
{
	int n;
	cin >> n;
	cout << Sl(n);
}
