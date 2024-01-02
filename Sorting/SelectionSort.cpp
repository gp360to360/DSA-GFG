#include <iostream>
using namespace std;
int selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            min_index = j;
        }
        // int temp = arr[i];
        // arr[i] = arr[min_index];
        // arr[min_index]= temp;
        swap(arr[i],arr[min_index]);
    }
}
int main() {
	int a[] = {2, 1, 3, 4};
	selectionSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}