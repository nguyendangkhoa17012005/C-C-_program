#include<iostream>

using namespace std;

int main ()
{
	int n, a[1000];	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	} 
	for (int i = 0; i < n; i++)
	{
		bool xh = false; 
		for (int j = 0; j < i; j++)
		{
			if(a[j] == a[i])
			{
				xh = true;
				break;
			}
		}
		if(xh == 0)
		cout << a[i] << " ";
	}
} 
