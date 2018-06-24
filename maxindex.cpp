#include <iostream>
#include <new>
using namespace std;

int main() {
	//code
	int T, i , j, k, N, *a, max;
	cin >> T;
	for(i = 0; i < T; i++) {
		cin >> N;
		if(N == 0) {
			cout << "0" << endl;
			continue;
		}
		a = new int[N];
		max = 0;
	    	for(j = 0; j < N; j++)
			cin >> a[j];
		for(j = 0; j < N / 2; j++)
			for(k = (N / 2) + j; k < N; k++)
				if(a[j] <= a[k] && max < (k - j))
					max = k - j;
		if(max) {
			cout << max << endl;
			delete [] a;
			continue;
		}
		for(j = 0; j < N / 2; j++)
			for(k = j + 1; k <= N / 2; k++)
				if(a[j] <= a[k] && max < (k - j))
					max = k - j;
		if(max) {
			cout << max << endl;
			delete [] a;
			continue;
		}
		for(j = N / 2; j < N - 1; j++)
			for(k = j + 1; k < N; k++)
				if(a[j] <= a[k] && max < (k - j))
					max = k - j;
		if(max) {
			cout << max << endl;
			delete [] a;
			continue;
		}
		cout << "0" << endl;
	}
	return 0;
}
