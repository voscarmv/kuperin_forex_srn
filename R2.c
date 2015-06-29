#include <stdio.h>
#include <stdlib.h>

double R2(double (*y)[2], int n);
void shift(double (*y)[2], int n);

int main(int argc, char *argv[]){
	int n;

	if(argc > 1)
		n = atoi(argv[1]);
	else
		return 1;

	double (*y)[2] = (double (*)[2]) malloc(sizeof(double [2]) * n);
	int i;

	for(i = 0; i < n - 1; i ++)
		scanf("%lf %lf", y[i], y[i] + 1);

	i = 0;
	while(scanf("%lf %lf", y[n - 1], y[n - 1] + 1) != EOF){
		printf(
			"R2 = %f, production set from y[%d] to y[%d]\n",
			R2(y, n), i, i + n - 1
		);
		shift(y, n);
		i ++;
	}

	free(y);
	return 0;
}

double R2(double (*y)[2], int n){
	int i;
	double S1 = 0;
	double S2 = 0;
	double y_mean = 0;

	for(i = 0; i < n; i ++)
		y_mean += y[i][1];

	y_mean /= n;

	for(i = 0; i < n; i ++){
		S1 += (y[i][1] - y[i][0]) * (y[i][1] - y[i][0]);
		S2 += (y[i][1] - y_mean) * (y[i][1] - y_mean);
	}

	return 1 - (S1 / S2);
}

void shift(double (*y)[2], int n){
	int i;

	for(i = 1; i < n; i ++){
		y[i - 1][0] = y[i][0];
		y[i - 1][1] = y[i][1];
	}

	return;
}
