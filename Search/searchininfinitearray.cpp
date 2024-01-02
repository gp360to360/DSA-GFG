#include <iostream>
using namespace std;
int bsearch(int arr[],int x,int low,int high)
{
    if(low>high)
    return -1;
        int mid = (low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            bsearch(arr,x,low,mid-1);
        }
        else
        bsearch(arr,x,mid+1,high);
    
}
int infinitesesarch(int arr[],int x)
{
    if(arr[0]==x)
    return 0;
    int i=1;
    while(arr[i]<x)
    
        i =i*2;
        if(arr[i]==x)
        return i;
    
    return bsearch(arr,x,i/2+1,i-1);

}
int main() {
    

   int arr[] = {1, 2, 3, 5, 5};

	int x = 3;

	cout << infinitesesarch(arr, x);

	return 0;
}