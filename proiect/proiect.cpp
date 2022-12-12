#include<iostream>
#include<cmath>
using namespace std;
int nr;
void H(int n, char a, char b, char c)
{
	if (n >= 1)
	{
		H(n - 1, a, c, b);
		cout << a << "->" << c << endl;
		H(n - 1, b, a, c);
	}
}