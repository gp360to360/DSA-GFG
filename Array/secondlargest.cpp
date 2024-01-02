#include <iostream>
using namespace std;
// int getlargest(int arr[],int n)
// {
//     int largest = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>arr[largest])
//         largest = i;
//     }
//     return largest;
// }
// int secondlargest(int arr[],int n)
// {
//     int largest = getlargest(arr,n);
//     int res = -1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr[largest])
//         {
//             if(res==-1)
//             {
//                 res = i;
//             }
//             else if(arr[i]>arr[res])
//             {
//                 res = i;
//             }
//         }
//     }
//     return res;
// }
int secondlargest(int arr[],int n)
{
    int largest = 0;
    int res = -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<secondlargest(arr, n);
    
}