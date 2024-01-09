#include <iostream>
#include <limits.h>
using namespace std;

 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;  // this term reduces all the 2 divisible terms
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";  // this reduces all the 3 divisible terms

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" "; // and all prime are come in this set

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;
}

int main() {
    
    	int n = 450;
    	
    	printPrimeFactors(n);
    	
    	return 0;
}