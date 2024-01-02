#include <iostream>
using namespace std;
// Recurssion solution
// int subsetsum(int arr[],int n ,int sum)
// {
//     if(n==0)
//     return sum==0?1:0;
//     return subsetsum(arr,n-1,sum) + subsetsum(arr,n-1,sum-arr[n-1]);
// }



// void subArraySum(int arr[], int n, int sum)
// {

// 	// Pick a starting point
// 	for (int i = 0; i < n; i++) {
// 		int currentSum = arr[i];

// 		if (currentSum == sum) {
// 			cout << "Sum found at indexes " << i << endl;
// 			return;
// 		}
// 		else {
			
// 			for (int j = i + 1; j < n; j++) {
// 				currentSum += arr[j];

// 				if (currentSum == sum) {
// 					cout << "Sum found between indexes "
// 						<< i << " and " << j << endl;
// 					return;
// 				}
// 			}
// 		}
// 	}
// 	cout << "No subarray found";
// 	return;
// }
int subArraySum(int arr[], int n, int sum) 
{ 
	int curr_sum = arr[0], start = 0, i; 
	for (i = 1; i <= n; i++) 
	{ 
		while (curr_sum > sum && start < i-1) 
		{ 
			curr_sum = curr_sum - arr[start]; 
			start++; 
		} 
		if (curr_sum == sum) 
		{ 
			printf ("Sum found between indexes %d and %d", start, i-1); 
			return 1; 
		} 
		if (i < n) 
		curr_sum = curr_sum + arr[i]; 
	} 

	 
	printf("No subarray found"); 
	return 0; 
} 
int main()
{
	int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
	return 0;
}