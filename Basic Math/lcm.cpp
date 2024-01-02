#include <iostream>
#include <limits.h>
using namespace std;
int lcm(int a, int b)
{
    int res = max(a,b);
    while(true)
    {
        if(a%res==0&&b%res==0)
        {
            return res;
            res++;
        }
        
    }
    return res;
}
int main()
{
    int c = 7;
    int d = 20;
    cout<<lcm(c,d);
    return 0;
}