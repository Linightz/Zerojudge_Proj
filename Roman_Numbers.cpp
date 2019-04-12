#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	int an, bn, res;
	while (cin >> a >> b)
	{
		an = 0; bn = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == 'I'&&a[i + 1] == 'V')
			{
				an += 4;
				i++;
				continue;
			}
			else if (a[i] == 'I'&&a[i + 1] == 'X')
			{
				an += 9;
				i++;
				continue;
			}
			else if (a[i] == 'X'&&a[i + 1] == 'L')
			{
				an += 40;
				i++;
				continue;
			}
			else if (a[i] == 'X'&&a[i + 1] == 'C')
			{
				an += 90;
				i++;
				continue;
			}
			else if (a[i] == 'C'&&a[i + 1] == 'D')
			{
				an += 400;
				i++;
				continue;
			}
			else if (a[i] == 'C'&&a[i + 1] == 'M')
			{
				an += 900;
				i++;
				continue;
			}
			else
			{
				switch (a[i]) {
				case 'I':an += 1; break;
				case 'V':an += 5; break;
				case 'X':an += 10; break;
				case 'L':an += 50; break;
				case 'C':an += 100; break;
				case 'D':an += 500; break;
				case 'M':an += 1000; break;
				}
			}
		}

		for (int i = 0; i < b.length(); i++)
		{
			if (b[i] == 'I'&&b[i + 1] == 'V')
			{
				bn += 4;
				i++;
				continue;
			}
			else if (b[i] == 'I'&&b[i + 1] == 'X')
			{
				bn += 9;
				i++;
				continue;
			}
			else if (b[i] == 'X'&&b[i + 1] == 'L')
			{
				bn += 40;
				i++;
				continue;
			}
			else if (b[i] == 'X'&&b[i + 1] == 'C')
			{
				bn += 90;
				i++;
				continue;
			}
			else if (b[i] == 'C'&&b[i + 1] == 'D')
			{
				bn += 400;
				i++;
				continue;
			}
			else if (b[i] == 'C'&&b[i + 1] == 'M')
			{
				bn += 900;
				i++;
				continue;
			}
			else
			{
				switch (b[i]) {
				case 'I':bn += 1; break;
				case 'V':bn += 5; break;
				case 'X':bn += 10; break;
				case 'L':bn += 50; break;
				case 'C':bn += 100; break;
				case 'D':bn += 500; break;
				case 'M':bn += 1000; break;
				}
			}
		}
		if (an > bn)
			res = an - bn;
		else if (an < bn)
			res = bn - an;
		else
		{
			res = 0;
			cout << "ZERO" << endl;
		}

		while (res > 0)
		{
			while (res >= 1000)
			{
				cout << 'M';
				res -= 1000;
			}
			while (res < 1000 && res >= 500)
			{
				if (res >= 900)
				{
					cout << 'C' << 'M';
					res -= 900;
				}
				else
				{
					cout << 'D';
					res -= 500;
				}
			}
			while (res < 500 && res >= 100)
			{
				if (res >= 400)
				{
					cout << 'C' << 'D';
					res -= 400;
				}
				else
				{
					cout << 'C';
					res -= 100;
				}
			}
			while (res < 100 && res >= 50)
			{
				if (res >= 90)
				{
					cout << 'X' << 'C';
					res -= 90;
				}
				else
				{
					cout << 'L';
					res -= 50;
				}
			}
			while (res < 50 && res >= 10)
			{
				if (res >= 40)
				{
					cout << 'X' << 'L';
					res -= 40;
				}
				else
				{
					cout << 'X';
					res -= 10;
				}
			}
			while (res < 10 && res >= 5)
			{
				if (res >= 9)
				{
					cout << 'I' << 'X';
					res -= 9;
				}
				else
				{
					cout << 'V';
					res -= 5;
				}
			}
			while (res < 5 && res >= 1)
			{
				if (res >= 4)
				{
					cout << 'I' << 'V';
					res -= 4;
				}
				else
				{
					cout << 'I';
					res -= 1;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
