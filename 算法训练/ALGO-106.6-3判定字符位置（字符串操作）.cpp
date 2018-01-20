#include <iostream>
#include <string>
using namespace std;
int f(string a) 
{
	int temp = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' 
		|| a[i] == 'o' || a[i] == 'u') {
			temp = i + 1;
			break;
		} 
	}
	return temp;
}

int main()
{
	string a;
	cin >> a;
	int n = f(a);
	cout << n;
	return 0;
}

