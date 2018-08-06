#include <iostream>
using namespace std;
void printloop(int n,int flag) {
	int change;
	if(!flag)
		change = 5;
	if(n <=0 || flag == 1) {
		change = -5;
		flag = 1;
	}
	if(change == -5 && n >= 16)
		return;
	cout << n << " ";
	printloop(n-change,flag);
}
int main() {
	int n;
	cin >> n;
	printloop(n,0);
	return 0;
}
