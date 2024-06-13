#include <iostream>
#include<iomanip>

using namespace std;

int main ()
{
	int n, k, cnt = 0;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(a[j] + a[i] == k && i != j)
			cnt++;
		}
	}
	cout << cnt;
} 
  
