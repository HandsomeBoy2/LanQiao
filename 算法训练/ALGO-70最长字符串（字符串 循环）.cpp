#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string a[5];
	int max = 0, n = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		int temp = a[i].length();
		if (temp >= max) {
			max = temp;
			n = i;
		}
	}
	cout << a[n];
	return 0;
}

