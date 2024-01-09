#include <iostream>
using namespace std;
int jos(int n,int k)
{
    if(n==1)
    return 0;
    return((jos(n-1,k)+k)%n); //jos(n-1) is we add +k and that not excede n so we take modulus with n 
}
int main ()
{
    cout<<jos(7,3);
    
}