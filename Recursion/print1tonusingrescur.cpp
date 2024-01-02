#include <iostream>
#include <limits.h>
using namespace std;

void print(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    print(n-1);
}
int main()
{
    int d = 4;
    print(d);
}