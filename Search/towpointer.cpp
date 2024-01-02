#include <iostream>
using namespace std;
int twopointer(int arr[],int n,int x)
{
    int low =0,high = n-1;
    while(low<=high)
    {
        if(arr[low]+arr[high]==x)
        return true;
        else if(arr[low]+arr[high]>x)
        high--;
        else
        low++;
    }
    return -1;
}
int main()
{
    int a[] = {2,5,8,12,30};
    int b = 5;
    int c = 18;
    cout<<twopointer(a,b,c);
}