/* C++ Program to search an element
in a sorted and pivoted array*/
#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high)
{
// base cases
if (high < low) return -1;
if (high == low) return low;

int mid = (low + high)/2; /*low + (high - low)/2;*/
if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1])
    return mid;
	
if (arr[low] >= arr[mid])
	return findPivot(arr, low, mid-1);
	
return findPivot(arr, mid + 1, high);
}

int main()
{
// Let us search 3 in below array
int arr1[] = {51, 61, 7, 8, 9, 10, 11, 12, 13};
int n = sizeof(arr1)/sizeof(arr1[0]);
int key = 3;

// Function calling
cout << "Index of the element is : " << 
		findPivot(arr1, 0, n-1);
			
return 0;
}
