#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int DistinctCount(int arr[],int n)
{
    unordered_set <int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}
int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << DistinctCount(arr, n);
    
    return 0;
}