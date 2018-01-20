#include <iostream>

using namespace std;
int main()
{
	int row;
	cin >> row;
	for (int i = 0; i < row; i++) {
		for (int j = row; j > i; j--) {
			if (j != 0) cout << " ";
			cout << "*"; 
		}
		cout << endl;
	} 
	return 0;
}

