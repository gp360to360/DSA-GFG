#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// int main()
// {
//     int arr[] = {10,8,3,22};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     for(int x:arr)
//     {
//         cout<<x<<" ";
//     }
//     sort(arr,arr+n,greater<int>());
	
// 	cout<<endl;
// 	for(int x: arr)
// 	    cout<<x<<" ";
// }
int main()
{
    vector<int> v = {10,3,6,5};
    sort(v.begin(),v.end());
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.begin(),greater<int>());
    for(int x: v)
    cout<<x<<" ";
}