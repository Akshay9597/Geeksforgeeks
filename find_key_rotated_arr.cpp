#include<iostream>
using namespace std;

int search(int low, int high, int arr[], int key){
	int mid, i;
	mid = (low + high) / 2;
	cout << "mid " << mid<< endl;
	if(low > high) {
		cout << "1st"<<endl;
		return -1;
	}
	if(arr[mid] == key) {
		cout << "2nd " << endl;
		return mid;
	}
	else if(arr[low] <= arr[mid]) {
		if(arr[low] < key && key <= arr[mid])
			return search(low,mid-1,arr,key);
		return search(mid+1,high,arr,key);
	}
	else if(arr[mid] <= key && key <= arr[high]) {
		return search(mid+1,high,arr,key);
	return search(low,mid - 1,arr,key);
	}
} 

int main(){
	int i = 10;
	int pos, key, j;
	int * arr = new int[10];
	cin >> key;
	cout << "enter:"<<endl;
	for(j = 0; j < i; j++) {
		cin >> arr[j];
		cout << j<<	" " << arr[j] << endl;
	}
	for(j = 0; j < i; j++)
		cout << arr[j] << " ";
	cout << endl;	
	pos = search(0, i-1, arr, key);
	cout << pos<< endl;
	return 0;
}
