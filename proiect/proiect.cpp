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
int main()
{
	char a = 'A', b = 'B', c = 'C';
	int n;
	cout << "Introduceti numarul de discuri: ";
	cin >> n;
	nr = (int)pow(2.0, n) - 1;
	cout << nr << endl;
	H(n, a, b, c);
	return 0;
}