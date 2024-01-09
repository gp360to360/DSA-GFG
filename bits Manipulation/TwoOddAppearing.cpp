#include <iostream>
#include <limits.h>
using namespace std;

int  twoodappearing(int arr[], int n)
{
    int x = arr[0];
    for(int i=0;i<n;i++)
    {
        x = x^arr[i]; 
    }
    int k = (x&(~(x-1)));  // this contain the bits of both odd occuring elemnts
    int res1 = 0;
    int res2 = 0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&k)!=0)
        res1 =res1^arr[i];
        else
        res2 = res2^arr[i];
    }
    cout<<(res1,res2);
}
int main()
{
    int arr[] = {1,2,3,3};
    int n = 4;
    twoodappearing(arr,n);
}