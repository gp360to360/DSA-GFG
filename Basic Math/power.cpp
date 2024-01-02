#include <iostream>
#include <limits.h>
using namespace std;

int power(int n,int x)
{
    int res = 1;
    for(int i=0;i<n;i++)
    {
        res = res*x;
    }
    return res;
}
int main()
{
    int c = 10 ;
    int d = 2;
    cout<<power(c,d);
}