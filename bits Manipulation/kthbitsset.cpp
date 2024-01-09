#include <iostream>
#include <limits.h>
using namespace std;

void setbit(int n,int k)
{
    int res = (1<<k); //left shift operator k tak phir n se uska product check kar liya
  
    if((res&n)!=0)  
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main()
{
    int c = 5;
    int d = 1;
    setbit(c,d);
}