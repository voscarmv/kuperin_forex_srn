#include <stdio.h>
#include <stdlib.h>

double ma(double *r, int n);
void shift(double *r, int n);

int main(int argc, char *argv[]){
	int n;

	if(argc > 1){
		n = atoi(argv[1]);
		if(n < 2 || n > 1024)
			return 2;
	}else
		return 1;

	double *r = (double *) malloc(sizeof(double) * n);
	int i;

	for(i = 0; i < n - 1; i ++)
		scanf("%lf", r + i);

	while(scanf("%lf", r + (n - 1)) != EOF){
		printf("%f\n", ma(r, n));
		shift(r, n);
	}

	free(r);
	return 0;
}

double ma(double *r, int n){
	int i;
	double a = 0;

	for(i = 0; i < n; i ++)
		a += r[i];

	return a / n;
}

void shift(double *r, int n){
	int i;

	for(i = 1; i < n; i ++)
		r[i - 1] = r[i];

	return;
}
