#include<iostream>

using namespace std;

void Dec(long long n)
{
	if(n < 2)
		cout << n;
	else{
		Dec(n / 2);
		
		cout << n % 2;
	} 
}

int main ()
{
	int n;
	cin >> n;
	Dec(n);
}
