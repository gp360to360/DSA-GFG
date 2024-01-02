#include <iostream>
using namespace std;
// int maxSum(int arr[],int n)
// {
//     int res = arr[0];
//     for(int i=1;i<n;i++)
//     {
//         int curr = 0;
//         for(int j=i;j<n;j++)
//         {
//             curr = curr+arr[j];
//             res = max(res,curr);
//         }
//     }
//     return res;
// }
int maxSum(int arr[],int n)
{
    int maxending = arr[0];
    int res = arr[0];
    for(int i=1;i<n;i++)
    {
        maxending = max(arr[i]+maxending,arr[i]);
        res = max(res,maxending);
    }
    return res;
}
int main() {
	int arr[]={100,8,-2,4,-5,6};
	int n=6;
	int res=maxSum(arr,n);
	cout<<res<<"\n";
}