#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int **p = new int *[a];
		for (int r = 0; r < a; r++)
			p[r] = new int[b];

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
				cin >> p[i][j];
		}

		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < a; j++)
				cout << p[j][i]<<" ";
			cout << endl;
		}
	}
	return 0;
}
