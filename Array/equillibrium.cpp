#include <iostream>
using namespace std;
// int equillibrium(int arr[],int n)
// {
//     int sum =0;
//     int lsum = 0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i]; pehle sum nikal liya
//     }
//     for(int i=0;i<n;i++)     phir two l sum se ukso compare kar liya kahi na kahi toh aisa element hoga jiska lsum == sum -arr[i] hoga
//     {
//         if(lsum==sum-arr[i])
//         {
//             return true;
//         }
//         lsum += arr[i];
//         sum-=arr[i];
//     }
//     return false;
// }
int equillibrium(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        int lsum =0;
        for(int j=i;j<n;j++)
        {
            lsum += arr[j];
        }
            if(lsum == sum)
        return 1;
        
    }
    return -1;
}
int main()
{
    int a[] = {3,4,8,-9,20,6};
    int n = 6;
    cout<<equillibrium(a,n);
}