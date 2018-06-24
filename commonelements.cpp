#include <iostream>
#include <new>
using namespace std;

int main() {
	//code
	int T, N1, N2, N3, i, j, k, *a, *b, *c, x[1024], y[1024], z[1024], ans[1024];
	cin >> T;
	for(i = 0; i < T; i++) {
	    cin >> N1 >> N2 >> N3;
	    a = new int [N1];
	    b = new int [N2];
	    c = new int [N3];
	    
	     for(j = 0; j < 1024; j++) {
	         x[j] = 0;
	         y[j] = 0;
	         z[j] = 0;
	     }
	     for(j = 0; j < N1; j++) {
	        cin >> a[j];
	        x[a[j]]++;
	     }
	    for(j = 0; j < N2; j++) {
	        cin >> b[j];
	        y[b[j]]++;
	    }
	    for(j = 0; j < N3; j++) {
	        cin >> c[j];
	        z[c[j]]++;
	    }
	    k = 0;
	    for(j = 1; j < 1024; j++) {
	        if(x[j] !=0 && y[j] != 0 && z[j] != 0) {
	            ans[k] = j;
	            k++;
	        }
	    }
	    if(k) {
	    	for(j = 0; j < k; j++)
	        	cout << ans[j] << " ";
	    }
	    else
		    cout << "-1";
	        
	   cout << endl;
	   delete [] a;
	   delete [] b;
	   delete [] c;

	}
	return 0;
}
