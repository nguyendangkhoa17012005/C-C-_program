#include<iostream>

using namespace std;

void Hex(long long n)
{
	if(n < 16)
	{
		if(n <= 9)
		cout << n;
		else 
		cout << char(n + 55); 
				
	}		
	else{
		Hex(n / 16);
		int tp = n % 16;
		if(tp <= 9) cout << tp;
		else cout << char (tp + 55);
	} 
}

int main ()
{
	int n;
	cin >> n;
	Hex(n);
}
