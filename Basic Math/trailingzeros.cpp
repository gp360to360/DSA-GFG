#include <iostream>
#include <limits.h>
using namespace std;
int countzeros(int x)
{
    int res =0;
    for(int i=5;i<=x;i = i*5)
    {
        res = res+(x/i);  
    }
    return res;
}
int main()
{
    int digit = 50;
    cout<<countzeros(digit);
}

// #include <iostream>
// #include <limits.h>
// using namespace std;

//  int countTrailingZeros(int n)
// {
// 	int res = 0;

// 	for(int i=5; i<=n; i=i*5)
// 	{
// 		res = res + (n / i);
// 	}

// 	return res;
// }
// int main() {
    
//     	int number = 50;
    	
//     	cout<<countTrailingZeros(number);
    	
//     	return 0;
// }