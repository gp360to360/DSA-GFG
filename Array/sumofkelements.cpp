#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
// int maxksum(int arr[],int n,int k)
// {
//     int curr_sum = 0;
//     for(int i=0;i<k;i++)
//     {
//         curr_sum += arr[i];
//     }
//     int max_sum = curr_sum;
//     for(int i=k;i<n;i++)
//     {
//         curr_sum += (arr[i]-arr[i-k]);
//         max_sum = max(curr_sum,max_sum);
//     }
//     return max_sum;
// }
int maxksum(int arr[],int n,int k)
{
    int sum =INT_MIN;
    for(int i=0;i+k-1<n;i++)
    {
        int num =0;
        for(int j=0;j<k;j++)
        {
            num += arr[j+i];
        }
        sum = max(num,sum);
    }
    return sum;
}
int main() {
	
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;

     cout<<maxksum(arr, n, k);
    
}