#include <stdio.h>

double f(double x, double s) {
	return (s/x + x)/2;
}

int main(void) {
	double s;
	double x = 1;
	scanf("%lf", &s);
	for (int i=0; i<10; i++) {
		x = f(x, s);
		printf("%lf\n", x);
	}
	
	return 0;
}
