#include <iostream>
using namespace std;
void maxheap(int arr[],int n,int i)
{
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n&&arr[largest]<arr[l])
    {
        largest = l;
    }
    if(r<n&&arr[largest]<arr[r])
    largest = r;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxheap(arr,n,largest);
    }
}
int buildheap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        maxheap(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
    buildheap(arr,n);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        maxheap(arr,i,0);
    }
}
void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 
int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapsort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 