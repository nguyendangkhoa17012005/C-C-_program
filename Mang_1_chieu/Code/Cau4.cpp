#include<iostream>

using namespace std;

int main ()
{
	int n, a[1000];
	int cnt = 0;
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
			if (a[j] == a[i])
			{
				xh =  true;
			}		
	 	}
	 	for (int f = 0; f < n; f++)
	 	{
	 		if (a[i] == a[f])
			cnt++;	
		}
		if (!xh)
		cout << a[i] << " " << cnt << endl;
		cnt = 0;
	}
}
