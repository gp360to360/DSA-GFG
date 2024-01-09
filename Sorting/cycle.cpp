#include <iostream>
using namespace std;
Cycle(int arr[],int n)
{
    for(int cs =0;cs<n;cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1;i<n;i++) // to place first item in correct position
        {
            if(arr[i]<item)
            pos++;
        }
        swap(item,arr[cs]);
        while(pos!=cs)
        {
            pos = cs;
            for(int i=cs+1;i<n;i++) // place another item in correct position 
            {
                if(arr[i]<item)
                pos++;
            }
            swap(item,arr[pos]);
        }
    }
}

int main() 
{ 
    int arr[] = { 20,40,50,10,30 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    Cycle(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 
} 