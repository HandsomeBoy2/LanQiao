#include <stdio.h>
using namespace std;

typedef struct  
{
	double real;
	double i;
} num;
char c;
num a[2], p, *q;

num * add()
{
	p.real = a[0].real + a[1].real;
	p.i = a[0].i + a[1].i;
	q = &p;
	return q;
}
num * minu()
{
	p.real = a[0].real - a[1].real;
	p.i = a[0].i - a[1].i;
	q = &p;
	return q;
}
num * pro()
{
	p.real = a[0].real * a[1].real;
	p.i = a[0].i * a[1].i;
	q = &p;
	return q;
}
num * div()
{
	p.real = a[0].real / a[1].real;
	p.i = a[0].i / a[1].i;
	q = &p;
	return q;
}
int main()
{
	scanf("%c %lf %lf %lf %lf", &c, &a[0].real, &a[0].i,
								&a[1].real,  &a[1].i) ;
	if (c == '+') 
		add();
	if (c == '-')
		minu();
	if (c == '*')
		pro();
	if (c == '/')
		div();
	printf("%.2f+%.2fi", q->real, q->i);
	return 0;
}

