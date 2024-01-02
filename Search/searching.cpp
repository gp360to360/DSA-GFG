#include <iostream>
using namespace std;
// int bsearch(int arr[],int n,int x)
// {
//     int low =0,high = n-1;
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(arr[mid]==x)
//         return mid;
//         else if(arr[mid]>x)
//         high = mid-1;
//         else
//         low = mid+1;
//     }
//     return -1;
// }
int bsearch(int arr[],int n,int x,int low,int high)
{
    if(low>high)
    return -1;
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        {
            return bsearch(arr,n,x,low,mid-1);
        }
        else
        return bsearch(arr,n,x,mid+1,high);
    
    return -1;
}
int main() {
    
    int arr[] = {10, 20, 30, 40, 50, 60}, n = 6;

	int x = 50,low = 0,high = n;
	
	cout<<bsearch(arr, n, x,low,high);
	return 0;
}