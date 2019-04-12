/*********************
Written by KH 3/11/19

The program first takes a int as how many input sequences, then takes the number of lines of 4 ints separated by spaces and calculates the 5th number depending on the previous 4 ints whether they form an arithmetic or a geometric sequence.
Ex. input:
2
1 2 3 4
2 4 8 16
Ex. output:
1 2 3 4 5
2 4 8 16 32
**********************/

#include<iostream>
using namespace std;
int main()
{
    short t;
    while(cin>>t)
    {
        int **val=new int *[t];
        for(int i=0;i<t;i++) val[i]=new int[5];
        for(int i=0;i<t;i++) for(int j=0;j<4;j++) cin>>val[i][j];
        for(int i=0;i<t;i++)
        {
            if(val[i][3]-val[i][2]==val[i][1]-val[i][0]) val[i][4]=val[i][3]+(val[i][3]-val[i][2]);
            else val[i][4]=val[i][3]*(val[i][3]/val[i][2]);
            for(int j=0;j<5;j++) cout<<val[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
