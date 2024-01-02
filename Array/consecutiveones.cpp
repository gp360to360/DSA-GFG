#include <iostream>
using namespace std;
// int consecutiveone(int arr[],int n)
// {
//     int res = 0;
//     int curr;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==0)
//         curr=0;
//         else
//         curr++;
//         res = max(res,curr);
//     }
//     return res;
// }
int consecutiveone(int arr[],int n)
{
    int res = 0;
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            curr++;
            else break;
        }
        res = max(res,curr);
    }
    return res;
}
int main()
{
    int a[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int b = 12;
    cout<<consecutiveone(a,b);

}