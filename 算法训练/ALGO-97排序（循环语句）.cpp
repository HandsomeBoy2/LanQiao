#include <iostream>
#include <algorithm> 
bool cmp (int a, int b) { return a > b;}
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++) 
		cin >> a[i];
	sort(a, a+3, cmp);
	for (int i = 0; i < 3; i++) {
		if (i != 0) cout << " ";
		cout << a[i];	
	}
	return 0;
}

