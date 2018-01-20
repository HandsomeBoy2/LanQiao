#include <stdio.h>
using namespace std;
int main()
{
	int n, m, v1, v2, w;
	scanf("%d %d", &n, &m);
	int a[200][200];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) a[i][j] = 0;
			else a[i][j] = 999999;
		}
	}
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &v1, &v2, &w);
		a[v1][v2] = w;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i][j] > a[i][k] + a[k][j])
				  	a[i][j] = a[i][k] + a[k][j];
			} 
		}
	}
	for (int i = 2; i <= n; i++) {
		printf("%d\n", a[1][i]);
	}
	
	return 0;
}

