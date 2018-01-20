#include <iostream>
#include <vector> 
using namespace std;
int main()
{
	int n, number, temp;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	cin >> number;
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == number) {
			temp = i;
			break;
		}	
	}
	if (i == n) {
		cout << "-1";
	} else {
		cout << temp+1;
	}
	return 0;
}

