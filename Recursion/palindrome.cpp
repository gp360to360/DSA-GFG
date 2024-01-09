// #include <iostream>
// #include <limits.h>
// using namespace std;
// bool palindrome(string str, int start,int end)
// {
//     if(start>=end)
//     return true;
//     return((str[end]==str[start])&& palindrome(str,start+1,end-1));
   
// }
// int main()
// {
//     string str = "aa";
//     int a = 0;
//     int b = str.length();
//     cout<<palindrome(str,a,b);
//     return 0;
    
// }
#include <iostream>
using namespace std;


bool isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     isPalindrome(str, start + 1, end - 1));
}

int main() {
	
	string s = "ab";
	
		printf("%s", isPalindrome(s, 0, s.length() -1) ? "true" : "false");
	
	return 0;
}