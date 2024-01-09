#include <iostream>
#include <limits.h>
using namespace std;

bool ispal(int n)
{
    int rev = 0;
    int temp = n;
    while(temp!=0)
    {
        int ld = temp%10; // this give last digit of number
        rev = rev*10 +ld;  // this expression give reverse order number
        temp = temp/10;  // this reduces last digit
    }
    return rev==n;
}
int main()
{
    int digit = 11;
    cout<<(bool)ispal(digit);
    return 0;
}