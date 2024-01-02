#include <iostream>
using namespace std;
int sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}
int main()
{
    int a[3] = {1,2,4};
    int b = 3;
    cout<<sorted(a,b);
}