/*
Written by KH 10/3/17

The program rotate an n * m matrix to a m * n matrix. It first takes two ints as n and m separated by space, then it takes n number of lines in which contains m number of ints separated by spaces. Finally the program outputs rotated matrix.
Ex. input:
2 3
3 1 2
8 5 4
Ex. output:
3 8
1 5
2 4
*/

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
