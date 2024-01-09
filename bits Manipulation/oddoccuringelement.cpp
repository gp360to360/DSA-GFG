#include <iostream>
#include <limits.h>
using namespace std;
int oddoccuring(int arr[],int n)
{
    int res = arr[0];
    for(int i=1;i<n;i++)
    {
        res = res^arr[i]; // even occurence hata dega bus odd occurence bachega isme bus

    }
    return res;
}
int main()
{
    int arr[] = {1,1,2,2,2},n=5;
    cout<<oddoccuring(arr,n);


}