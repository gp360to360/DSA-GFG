#include <iostream>
using namespace std;
int merge(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]>=b[j])
        cout<<b[j++]<<" ";
        else
        cout<<a[i++]<<" ";
    }
    while(i<n)
    {
        cout<<a[i++]<<" ";
    }
    while(j<m)
    {
        cout<<b[j++]<<" ";
        
    }
}
int main() {
	
    int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	merge(a,b,m,n);
}