#include <iostream>
#include <unordered_set>
using namespace std;
int Intersection(int a[],int b[],int m,int n)
{
    unordered_set<int>s(a,a+m);
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
        {
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int arr1[] = { 30,20};
    int arr2[] = { 20,30 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    Intersection(arr1, arr2, m, n);

    return 0;
}