#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int prime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int digit = 7;
    cout<<prime(digit);
}