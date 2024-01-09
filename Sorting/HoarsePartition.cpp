// #include <iostream>
// using namespace std;
// int HoarsePartition(int arr[],int l,int h)
// {
//     int pivot = arr[l];
//     int i=l-1,j=h+1;
//     while(true)
//     {
//         do{
//             i++;
//         }
//         while(arr[i]<pivot);
        
//             do{
//                 j--;
//             }
        
//         while(arr[i]>pivot);
        
//             if(i>=j)
//             return j;
        
//         swap(arr[i],arr[j]);
//     }
// }
// int main() {
	
//     int arr[]={5,3,8,4,2,7,1,10};
	
// 	int n=sizeof(arr)/sizeof(arr[0]);
	
// 	HoarsePartition(arr,0,n-1);
	
// 	for(int x: arr)
// 	    cout<<x<<" ";
// }


#include <iostream>
using namespace std;

int HoarePartition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l - 1, j = h + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int partitionIndex = HoarePartition(arr, 0, n - 1);

    cout << "Partition Index: " << partitionIndex << endl;

    cout << "Array after partition:" << endl;
    for (int x : arr)
        cout << x << " ";

    return 0;
}