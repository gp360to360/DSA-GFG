#include <iostream>
#include <limits.h>
using namespace std;
 void subsets(string s, string curr = " ", int i=0)
 {
    if(i==s.length())
    {
        cout<<curr;
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);  // Ek ko include karna or nahi karna 
 }
 int main()
 {
    string a = "abcd";
    string b = " ";
    int c = 0;
    subsets(a,b,c);
 }