#include <iostream>
using namespace std;
int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return 0;
        
    }
    return 1;
}
int main()
{
    int a[5] = {1,2,3,5,6};
    int b = 5;
    int c = 4;
    cout<<search(a,b,c);
}