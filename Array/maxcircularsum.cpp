#include <iostream>
using namespace std;
// int maxcir(int arr[],int n)
// {
//     int res = arr[0];
//     for(int i=1;i<n;i++)
//     {
//         int curr_sum = arr[i];
//         int cir_sum = arr[i];
//         for(int j=1;j<n;j++)
//         {
//             int index = (i+j)%n;
//             curr_sum += arr[index];
//             cir_sum = max(curr_sum,cir_sum);
//         }
//         res = max(res,cir_sum);

//     }
//     return res;
// }
int kadane(int arr[],int n)
{
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1;i<n;i++)
    {
        maxending = max(maxending+arr[i],arr[i]);
        res = max(res,maxending);
    }
    return res;
}
int maxcir(int arr[],int n)
{
    int max_nomral = kadane(arr,n);
    if(max_nomral<0)
    return max_nomral;
    int arr_sum =0;
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_cir = arr_sum + kadane(arr,n);
    return max(max_cir,max_nomral);
}

int main() {
	
     int arr[] = {-44, -4, 3, -5, 4}, n = 5;

     cout<<maxcir(arr, n);
    
}