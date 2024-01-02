#include <iostream>
using namespace std;
int stock(int arr[],int n)
{
    int res = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
        {
            res = res + arr[i+1] - arr[i];
        }
    }
    return res;
}
int main()
{
    int a[] = {4, 2, 2, 2, 4};
    int n = 5;
    cout<<stock(a,n);
}