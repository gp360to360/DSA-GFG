#include <iostream>
#include <limits.h>
using namespace  std;

// int powerof2(int n)
// {
//     if(n==0)
//     {
//         return false;
//     }
//     while(n!=1)
//     {
//         if(n%2!=0)
//         return false;
//         n = n/2;
//     }
//     return true;

// }
int powerof2(int n)
{
    if(n==0)
    return true;
    return ((n&(n-1))==0);  //classic property of bits kahi par bhi 2 ke sath khel karna hai toh bits ki tarif dhyan jana is compoulsory
}
int main()
{
    int d = 4;
    cout<<("%s", powerof2(d)? "true": "false");
}