#include <iostream>
#include <limits.h>
using namespace std;
int print1ton(int n)
{
    if(n==0)
    return 0 ;
    print1ton(n-1);
    cout<<n<<" ";
}
int main()
{
    int d = 9;
    print1ton(d);
}