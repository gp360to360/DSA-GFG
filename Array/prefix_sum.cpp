#include <iostream>
using namespace std;
int prefixsum(int arr[],int n)
{
    int temp[n];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        temp[i] = sum;

    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<endl;
    }
}
int main(){
    int arr[]={2, 8, 3, 9, 6, 5};
    int n = 6;
prefixsum(arr,6);
    return 0;
}