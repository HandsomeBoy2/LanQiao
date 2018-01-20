#include <iostream>
#include <string> 
#include <cctype>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int lena = a.length();
	int lenb = b.length();
	if (lena != lenb) {
		cout << 1;
		return 0;
	}
	int flag = 1; 
	for (int i = 0; i < lena; i++) {
			if (a[i] != b[i]) {
				flag = 0;
				break;
			}
		} 
	if (flag == 1) {
		cout << 2;
		return 0;
	}	
	int cnt = 0;
	int i = 0;
	for (i = 0; i < lena; i++) {
		if (a[i] == b[i])
			continue;
		if (a[i] != b[i] && tolower(a[i]) == tolower(b[i]))
			continue; 
		else {
		 	cout << 4;
		 	break; 
		} 
	}
	if (i == lena)
		cout << 3;
	return 0;
}

