#include<iostream>

using namespace std;

int Tohop(int n, int k)
{
	if(k == 0 || k == n)
	return 1;
	else{
		return Tohop(n - 1, k - 1) + Tohop(n -1, k);
	}
}

int main ()
{
	int n, k;
	cin >> n;
	cin >> k;
	cout << Tohop(n,k);
}
