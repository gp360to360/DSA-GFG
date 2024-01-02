#include <iostream>
#include <limits.h>
using namespace std;

bool ispal(int n)
{
    int rev = 0;
    int temp = n;
    while(temp!=0)
    {
        int ld = temp%10;
        rev = rev*10 +ld;
        temp = temp/10;
    }
    return rev==n;
}
int main()
{
    int digit = 11;
    cout<<(bool)ispal(digit);
    return 0;
}