#include <iostream>
#include <vector>
#include <algorithm>
bool cmp(int a, int b) { return a > b; } //�ѿ��ӷ�ƨƨ ������ 
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end(), cmp);
	cout << a[0]  << endl << a[n-1] << endl << sum;
 	return 0;
}

