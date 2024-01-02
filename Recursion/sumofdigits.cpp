#include <iostream>
#include <limits.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    return (n%10 + sum(n/10));
}
int main()
{
    int d = 534535345;
    cout<<sum(d);
}