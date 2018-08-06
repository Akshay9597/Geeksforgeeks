#include<iostream>
#include<string>
using namespace std;
int main() {
	int i,l=0;
	char *str, *tmp, *j, *uniquetmp;
	cin >> str;
	tmp = str;
	while(tmp)
		l++;
	cout<<l;
	char *unique = new char(l);
	i = 0;
	tmp = str;
	uniquetmp = unique;
	while(tmp) {
		j = uniquetmp;
		while(j){
			if(*j == *tmp) {
				*j = '0';
				break;
			}
			else
				j++;
		}
		if(j==NULL)
			*unique = *tmp;
			unique++;
		tmp++;
	}
	tmp = uniquetmp;
	while(tmp) {
		if(*tmp != '0'){
			cout << *tmp << endl;
			break;
		}
	}
	if(tmp == NULL)
		cout << "-1" << endl;
	
}
