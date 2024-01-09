#include <iostream>
#include <limits.h>
using namespace std;

// Naive Solution
// int gcd(int a, int b)
// {
//     int res = min(a,b);
//     while(res>0)
//     {
//         if(a%res==0&&b%res==0)
//         {
//             break;
//         }
//         res--;
//     }
//     return res;
// }

// int main()
// {
//     int c = 7;
//     int d = 15;
//     cout<<gcd(c,d);
// }

int gcd(int a,int b)
{
   if(b==0)
   {
    return a;  //we are trying to making your a zero
   }
   else
   {
    return gcd(b,b%a);
   }
}
int main()
{
    int c = 7;
    int d = 15;
    cout<<gcd(c,d);
}