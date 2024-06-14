#include<iostream>
#include<cmath>
using namespace std;
int n, a[1000];
void insert()
{
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		cin >> a[i];
	}
}
int Check(int a)
{
	if (a < 2 )
	return 0;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		return 0;
	}
	return 1;
}

void Sum_NT()
{
	int suml = 0, sumr = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			suml += a[j];
		}
		for(int k = n - 1; k > i; k-- )
		{
			sumr += a[k];
		}
		if(check(suml) && check(sumr))
		cout << i << " ";
		suml = 0; sumr = 0;
	}
}
int main ()
{
	insert();
	Sum_NT();
}
