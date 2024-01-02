#include <iostream>
using namespace std;
int insert(int arr[],int n,int cap,int pos,int val)
{
    if(n==cap)
    return false;
    int indx = pos-1;
    for(int i=n-1;i>=indx;i--)
    {
        arr[i+1] = arr[i];

    }
    arr[indx] = val;
    return n+1;
}
int main()
{
    int a[5] = {1,2,3,4};
    int b = 4;
    int c = 5;
    int d = 3;
    int e = 10;
    cout<<insert(a,b,c,d,e)<<endl;
   
    for(int i=0;i<c;i++)
    {
        cout<<a[i]<<" ";
    }

}