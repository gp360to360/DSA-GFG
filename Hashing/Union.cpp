#include <iostream>
#include <unordered_set>
using namespace std;
int Union(int a[],int n,int b[],int m)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << Union(arr1, m, arr2, n);
}