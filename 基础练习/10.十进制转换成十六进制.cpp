#include <stdio.h>

int main()
{
	int n;
	scanf("n", &n);
	char a[100];
	int i = 0;
	if (n == 0) {
		printf("0");
	} else {
		while (n != 0) { 
		if (n % 16 >= 10)
			a[i++] = n % 16 - 10 + 'A' ;
		else
			a[i++] = n % 16 + '0';
		n = n / 16;
		}
	}
	for (int j = i-1; j >= 0; j--) {
		printf("%c", a[j]);
	}
	return 0;
}

