#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int R=4,C=4;
void Search(int mat[R][C], int x)
{
    int i = 0, j= C-1;
    while(i<R&&j>=0)
    {
        if(mat[i][j]==x)
        {
            cout << "Found at (" << i << ", " << j << ")";
            return ;
        }
        else if(mat[i][j]>x)
        {
            j--;
        }
        else
        i++;

    }
}
int main()
{	
    int arr[][C] = {{10, 20, 30, 40},
    			   {15, 25, 35, 45},
    			   {27, 29, 35, 45},
    			   {32, 33, 39, 50}};
			   
	int x = 29;	   

	Search(arr, x);

	return 0;
}