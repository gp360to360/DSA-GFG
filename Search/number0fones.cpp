#include <iostream>
using namespace std;
int noofones(int arr[],int n)
{
    int low = 0,high = n-1;
    int mid = (low+high)/2;
    while(low<=high)
    {
        if(arr[mid]==0)
        {
            low = mid+1;
        }
        else
        {
            if(arr[mid]==0||arr[mid-1]!=arr[mid])
            return (n-mid);
            else
            high = mid-1;
        }
    }
    return 0;
}
int main() {
    
   int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;

   cout << noofones(arr, n);

	return 0;
}