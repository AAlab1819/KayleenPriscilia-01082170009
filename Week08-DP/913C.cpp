#include<iostream>
#include<algorithm>
using namespace std;
long long n, l, d, a[40], i, c, s = 1e18;
int main()
{
	cin >> n >> l;
	for (i = 0; i<n; i++)
	{
		cin >> a[i];
		if (i)a[i] = min(a[i - 1] * 2, a[i]);
	}
	for (i = n - 1; i >= 0; i--)
	{
		d = (1 << i); c += a[i] * (l / d);
		l %= d;
		s = min(s, c + (l != 0)*a[i]);
	}
	cout << s;
