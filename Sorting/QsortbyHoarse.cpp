#include <iostream>
using namespace std;
int Hoarse(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l-1,j = h+1;
    while(true)
    {
        do{
            i++;
        }
        while(arr[i]<pivot);
        do{
            j--;
        }
        while(arr[j]>pivot);
            if(i>=j)
            return j;
        
        swap(arr[i],arr[j]);
    }
    return i+1;
}
void qsort(int arr[],int l,int h)
{
    if(l<h)
    {int p = Hoarse(arr,l,h);
    qsort(arr,l,p);
    qsort(arr,p+1,h);}
    
}
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	qsort(arr,0,n-1);
	
	for(int x: arr)
	    cout<<x<<" ";
}


// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[], int l, int h)
// {   
//     int pivot=arr[l];
//     int i=l-1,j=h+1;
//     while(true){
//         do{
//             i++;
//         }while(arr[i]<pivot);
//         do{
//             j--;
//         }while(arr[j]>pivot);
//         if(i>=j)return j;
//         swap(arr[i],arr[j]);
//     }
//     return i+1;
// }

// void qSort(int arr[],int l,int h){
//     if(l<h){
//         int p=partition(arr,l,h);
//         qSort(arr,l,p);
//         qSort(arr,p+1,h);
//     }
// }
 
// int main() {
	
//     int arr[]={8,4,7,9,3,10,5};
	
// 	int n=sizeof(arr)/sizeof(arr[0]);
	
// 	qSort(arr,0,n-1);
	
// 	for(int x: arr)
// 	    cout<<x<<" ";
// }