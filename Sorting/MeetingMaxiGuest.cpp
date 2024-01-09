#include <iostream>
#include <algorithm>
using namespace std;
int MeetingMaxiGuest(int ari[],int dep[],int n)
{
    sort(ari,ari+n);
    sort(dep,dep+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n&&j<n)
    {
        if(ari[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res,curr);
    }
    
}
int main() 
{ 
    int arr[] = { 900, 600, 700};
    int dep[] = { 1000, 800, 730};
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    cout<<MeetingMaxiGuest(arr,dep, n); 
    
    return 0; 
} 