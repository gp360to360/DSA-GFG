#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int movezero(int arr[],int n)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
int arr[] = {1,9,8,4,0,0,2,7,0,6,0,9};
int n = 12;
cout<<movezero(arr,n);



cout << "\n";

return 0;
}

