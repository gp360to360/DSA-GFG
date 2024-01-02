#include <iostream>
#include <limits.h>
using namespace std;
bool palindrome(string str, int start,int end)
{
    if(start>=end)
    return true;
    return((str[end]==str[start])&& palindrome(str,start++,end--));
}
int main()
{
    string str = "aaa";
    int a = 0;
    int b = str.length();
    cout<<palindrome(str,a,b);
    
}
