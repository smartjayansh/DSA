#include <bits/stdc++.h>
using namespace std;

// Time Complexity: 
    // Best Case: O(1)
    // Average Case: O(log N)
    // Worst Case: O(log N)
// Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

int binarySearch(int arr[], int left, int right, int target){
    if(right>=left){
        int mid = left + (right-left)/2;

        if(arr[mid]==target)
            return mid;
        if(arr[mid]<target)
            return binarySearch(arr,mid+1,right,target);
        return binarySearch(arr, left, mid-1, target);
    }
    return -1;
}

// Driver code
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}