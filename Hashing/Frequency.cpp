#include <bits/stdc++.h>
#include <unordered_map>
#include <iostream>
using namespace std;
int CountFrequecny(int arr[],int n)
{
    unordered_map<int ,int>h;
    for(int i=0;i<n;i++)
    {
        h[arr[i]]++;
    }
    for(auto it = h.begin();it!=h.end();it++)
    {
         cout << it->first<< " " << it->first<< endl;
    }
}
int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    CountFrequecny(arr, n);
    return 0;
}
// #include <iostream>
// #include <unordered_map>

// using namespace std;

// void CountFrequency(int arr[], int n) {
//     unordered_map<int, int> h;

//     // Counting frequencies
//     for (int i = 0; i < n; i++) {
//         h[arr[i]]++;
//     }

//     // Displaying frequencies
//     for (auto it = h.begin(); it != h.end(); it++) {
//         cout << it->first << " " << it->second << endl;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 1, 2, 4, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     CountFrequency(arr, n);

//     return 0;
// }