#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int n = 4;
int Degree(int arr[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int low=0,high = n-1;
        while(low<high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }

    }
}
int main()
{	
	int arr[n][n] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

   Degree(arr);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}	

	return 0;
}