#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int i=-1,j=n; // basic idea is to put all positive in right side and all negative in left side
    while(true) // 
    {
        do{i++;}while(arr[i]<0); // we take two pointer one start from 0 and other start form n-1
        do{j--;}while(arr[j]>=0);// 
        if(i>=j)return;
        swap(arr[i],arr[j]);
    }
}

int main() {
	
    int arr[]={13,-12,18,-10};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	sort(arr,n);
	
	for(int x:arr)
	    cout<<x<<" ";
}