#include <iostream>
using namespace std;
int doublepair(int arr[],int n,int x)
{
    int low =0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[low]+arr[high]==x)
        return true;
        else if(arr[low]+arr[high]>x)
        high--;
        else
        low++;
    }
    return -1;
}
int triplet(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(doublepair(arr,arr[i]-x,i+1))
        return true;
    }
    return -1;
}
int main() 
{ 
	int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 22; 
	int arr_size = 6; 

	cout<<triplet(A, arr_size, sum); 

	return 0; 
} 