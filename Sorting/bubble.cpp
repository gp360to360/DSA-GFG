#include <iostream>
using namespace std;
 int bubbleSort(int arr[],int n)
 {
    bool swapped = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false)
    break;
    }
    
 }
int main() {
	int a[] = {1,2,3,4};
	bubbleSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}