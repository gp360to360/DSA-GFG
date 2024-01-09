#include <iostream>
using namespace std;
int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int k_thsamllest(int arr[],int n,int k)
{
    int l=0,h = n-1;
    while(l<=h)
    {
        int p  = partition(arr,l,h);
        if(p==k-1)
        return p;
        else if(p>k-1)
        h = p-1;
        else
        l = p+1;
    }
    return -1;
}
int main() {
	
    int arr[]={10,4,5,8,11,6,26};
	
	int n=sizeof(arr)/sizeof(arr[0]);int k=5;
	
	int index=k_thsamllest(arr,n,k);
	
	cout<<arr[index];
	
}