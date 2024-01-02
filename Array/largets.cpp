
#include <bits/stdc++.h>
using namespace std;

using namespace std;

// int getlargest(int arr[],int n)
// {
//     for(int i=0;i<n;++i)
//     {
//         bool flag=true;
//         for(int j=i;j<n;++j)
//         {
//             if(arr[j]>arr[i])
//             {
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true)
//     {
//         return i;
//     }
//     }
    
//     return -1;
// }
int getlargest(int arr[],int n)
{
    int res = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int arr[]={5,8,20,15};
    cout<<getlargest(arr,4);
    return 0;
}