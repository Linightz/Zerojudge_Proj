/*********************
Written by KH 3/11/19

The program takes one integer as input and outputs all of its factors.
**********************/

#include<iostream>
using namespace std;
int main()
{
	int n, c;
	while (cin >> n)
	{
		c = 0;
		for (int i = 2; i <= n; i++)
		{
			if (n%i == 0)
			{
				if (c != 0) cout << " * ";
				cout << i;
				int counter = 0;
				while (n%i == 0 && n > 0) {
					n /= i;  
					counter++;
				}
				if (counter > 1) cout << "^" << counter;
				c++;
			}
		}
		if (c == 0) cout << n << endl;
		cout << endl;
	}
	return 0;
}
