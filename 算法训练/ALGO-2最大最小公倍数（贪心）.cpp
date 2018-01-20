#include <iostream>

using namespace std;
int main()
{
	long long int ans, N;
	cin >> N;
	if (N <= 2)
		ans = N;
	else if (N % 2 == 1) 
		ans = N * (N-1) * (N-2);
	else if (N % 3 == 0) 
		ans = (N-1) * (N-2) * (N-3);
	else 
		ans = N * (N-1) * (N-3);
	cout << ans << endl;
	return 0;
}
