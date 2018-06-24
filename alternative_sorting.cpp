#include <iostream>
using namespace std;
int main() {
	int input, arr[1024], i = 0, j, arrlen, max , tmp, min;
	do {
		cin >> input;
		if(input == 10)
			break;
		arr[i] = input;
		i++;
	}while(i == 5);
	cout << i << endl;
	arrlen = i;
	for(i = 0; i < arrlen; i++) {
		cout << arr[i];
	}
	for(i = 0; i < arrlen; i++) {
		max = min = arr[i];
		tmp = i;
		if(i % 2 == 0) {
		for(j = i; j < arrlen; j++) {
			if(max < arr[j]) {
				max = arr[j];
				tmp = j;
			}
			if(j != i) {
				arr[i] = min;
				arr[i] = max;
				arr[tmp] = tmp;
			}
		}
		}
		if(i % 2 != 0) {
		for(j = i; j < arrlen; j++) {
			if(min < arr[j]) {
				min = arr[j];
				tmp = j;
			}
			if(j != i) {
				arr[i] = max;
				arr[i] = min;
				arr[tmp] = tmp;
			}
		}
		}
	}
	for(i = 0; i < arrlen; i++) {
		cout << arr[i];
	}
}
