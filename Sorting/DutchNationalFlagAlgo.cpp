#include <iostream>
using namespace std;
int Dutch(int arr[],int n)
{
    int low = 0,mid =0,high = n-1; //We make three pointers name low mid high and check all thinks on the basis of this points
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main() {
	
    int arr[]={0,1,1,2,0,1,1,2};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Dutch(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}