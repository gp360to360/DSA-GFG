// #include <iostream>
// using namespace std;
// int Union(int a[],int b[],int n,int m)
// {
//     int i=0,j=0;
//     while(i<n&&j<m)
//     {
//         if(i>0&&a[i-1]==a[i])
//         {   i++;
//              continue;
//        }
       
//           if(j>0&&b[i-1]==b[i])
//           { j++;
//             continue;
//        }
        
//         if(a[i]>b[j])
//         {
//             cout<<b[i]<<" ";
//             j++;
//         }
//         else if(a[i]<b[j])
//         {
//             cout<<a[i]<<" ";
//             i++;
//         }
//         while(i<n)
//         {
//             cout<<a[i]<<" ";
//             i++;
//         }
//         while(j<n)
//         {
//             cout<<b[j]<<" ";
//             j++;
//         }
//     }
// }
// int main() {
	
//     int a[]={3,5,10,10,10,15,15,20};
//     int b[]={5,10,10,15,30};
	
// 	int n=sizeof(a)/sizeof(a[0]);
// 	int m=sizeof(b)/sizeof(b[0]);
//     Union(a,b,n,m);
// }

#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[], int b[], int m, int n){
    
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){i++;continue;}
        if(j>0 && b[j-1]==b[j]){j++;continue;}
        if(a[i]<b[j]){cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
        else{cout<<a[i]<<" ";i++;j++;}
    }
        while(i<m){if(i==0||a[i]!=a[i-1])cout<<a[i]<<" ";i++;}
        while(j<n){if(j==0||b[j]!=b[j-1])cout<<b[j]<<" ";j++;}
}

int main() {
	
    int a[]={3,8,8};
    int b[]={2,8,8,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	printUnion(a,b,m,n);
}