#include<iostream>
#include<iomanip>
using namespace std;

double S(int n)
{
	if(n == 0)
	return 0;
	else{
		return 1.0 / n + S(n - 1);
	}
}

int main ()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(3) << S(n);
}
