#include <iostream>
using namespace std;
int search(int arr[],int n,int x)
{
    int low =0,high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        
         if(arr[mid]>x)
        high = mid-1;
        else if(arr[mid]<x)
        low = mid+1;
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    
    int arr[] = {10, 20, 30,40,40,50, 60}, n = 7;

	int x = 40,low = 0,high = n;
	
	cout<<search(arr, n, x);
	return 0;
}