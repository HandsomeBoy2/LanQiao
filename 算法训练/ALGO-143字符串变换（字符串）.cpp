#include <iostream>
#include <cctype> 
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string a;
	cin >> a;
	int lena = a.length();
	switch (n) 
	{
		case 1 :
			for (int i = 0; i < lena; i++)
			a[i] = toupper(a[i]);
			cout << a;
			break;
		case 2 :
			for (int i = 0; i < lena; i++)
				a[i] = tolower(a[i]);
			cout << a;
			break;
		case 3 :
			for (int i = lena - 1; i >= 0; i--)
					cout << a[i];
			break;
		case 4 :
			for (int i = 0; i < lena; i++) {
				if (isupper(a[i]))
				a[i] = tolower(a[i]);
				else
				a[i] = toupper(a[i]);
			}
			cout << a;
			break;
		default :
			string t;
			for (int i = 0; i < lena; i++)
				a[i] = tolower(a[i]);
			for (int i = 0; i < lena; i++) {
				if(i == 0) {
					t += a[i];
				} else if (i != lena - 1) {
					if (a[i] - a[i-1] != 1 || a[i+1] - a[i] != 1) {
						t += a[i];
					} else if (t[t.length() - 1] != '-') {
						t += '-';
					}
				} else {
					t += a[i];
				}	
			}
			cout << t;	
			break;
	} 

	return 0;
}

