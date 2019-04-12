/*********************
Written by KH 2/25/16

Given ax^2 * bx * c = 0, the program takes 3 int inputs as a, b, c, separated by spaces, and output its root.
*********************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int Num[3],NUMBER,ANSER;
	int x=0,x1=0,x2=0,x3=0;
	while(scanf("%d %d %d",&Num[0],&Num[1],&Num[2])!=EOF)
	{
		ANSER=sqrt(NUMBER=pow(Num[1],2)-4*Num[0]*Num[2]);
		if(ANSER>0)
		{
			x1=(-Num[1]+ANSER)/(2*Num[0]);
			x2=(-Num[1]-ANSER)/(2*Num[0]);
			printf("Two different roots x1=%d , x2=%d\n",x1,x2);
		}
		else if(ANSER==0)
			printf("Two same roots x=%d\n",x3=-Num[1]/(2*Num[0]));
		else
			printf("No real root\n");
	}
	return 0;
}
