#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double rate(double s1, double s2);

int main(){
	double s[2];

	scanf("%lf", s);
	while(scanf("%lf", s + 1) != EOF){
		printf("%f\n", rate(s[0], s[1]));
		s[0] = s[1];
	}

	return 0;
}

double rate(double s1, double s2){
	return log(s2 / s1);
}
