#include <iostream>
#include <limits.h>
using namespace std;

int tbl[256];
void initialize()
{
    tbl[0] = 0;
    for(int i=1;i<256;i++)
    {
        tbl[i] = tbl[i&(i-1)] +1 ;
    }
}
int countsetbits(int n)
{
    return tbl[n&255] + tbl[(n>>8)&255] + tbl[(n>>16)&255] + tbl[(n>>24)];
}
// int countsetbits(int n)
// {
//     int res = 0;
//     while(n>0)
//     {
//        n = n&(n-1);
//        res = res+1;
        
//     }
//     return res;
// }

int main()
{
    int x = 7;
    cout<<countsetbits(x);
}