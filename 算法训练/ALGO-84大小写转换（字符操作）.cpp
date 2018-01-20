#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int lena = a.length();
	for (int i = 0; i < lena; i++) {
		if (islower(a[i])) {
			a[i] = toupper(a[i]);
		} else if (isupper(a[i])) {
			a[i] = tolower(a[i]);
		}
	}
	for (int i = 0; i < lena; i++) {
		cout << a[i];
	}
	return 0;
}

