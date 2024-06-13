#include <iostream>
#include <cmath> 
using namespace std;
int main ()
{
	int a[100];
	int n, min = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(abs(a[j] - a[i]) < min)
				min = abs(a[j] - a[i]);
		}
	}
	cout << min;
}

 
