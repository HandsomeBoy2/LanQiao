#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int a[N][N] = {0}, b[N][N] = {0}, t[N][N] = {0};
	for(int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j]; 
			t[i][j] = a[i][j];
		}
	}
	if (M == 0) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i != j) cout << 0 << " ";
				else if (i == j) cout << 1 << " ";
			}
			cout << endl;
		}	
		return 0;
	} else {
		while (--M) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					for (int k = 0; k < N; k++) {
						b[i][j] = b[i][j] + t[i][k] * a[k][j];
					}		
				}
			}
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					t[i][j] = b[i][j];
					b[i][j] = 0;			
				}
			}
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (j != 0) cout << " ";
					cout << t[i][j];				
				}
			cout << endl;
			}
		}
	}
	return 0;
}

