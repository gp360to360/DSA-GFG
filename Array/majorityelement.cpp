#include <iostream>
using namespace std;
// int majorelement(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int count = 1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             count++;
           
//         }
//         if(count>n/2)
//         return i;
//     }
//     return -1;
// }
int majorelement(int arr[],int n)
{
    int res = 0;
    int count = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[res] == arr[i])
        count++;
        else
        count--;
        if(count==0)
        {
            res = i;
            count=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[res])
        {
            count++;
        }
        
    }
    if(count<=n/2)
        return -1;
        
        return res;
}
int main() {
	
     int arr[] = {8, 7, 6, 8, 6, 6, 4, 6}, n = 8;

     cout<<majorelement(arr, n);
    
}