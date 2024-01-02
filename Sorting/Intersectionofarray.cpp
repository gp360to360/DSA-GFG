#include <iostream>
using namespace std;
// int intersection(int a[],int b[],int n,int m)
// {
//     for(int i=0;i<n;i++)
//     {
        
//      if(i>0&&a[i-1]==a[i])
//      continue;
//         for(int j=i;j<m;j++)
//         {
//             a[i]==b[j];
//             cout<<a[i]<<" ";
//             break;
//         }

//     }
// }
int intersection(int a[],int b[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(i>0&&a[i-1]==a[i])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j])
        j++;
        else
        {cout<<a[i]<<" ";
        i++,j++;}
        
    }
}
int main() {
	
    int a[]={3,5,10,10,10,15,15,20};
    int b[]={5,10,10,15,30};
	
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	intersection(a,b,n,m);
}