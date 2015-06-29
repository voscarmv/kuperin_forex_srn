#include <stdio.h>
#include <stdlib.h>

int main(){
	double y[2];

	scanf("%lf", y);
	while(scanf("%lf", y + 1) != EOF){
//		NAIVE PREDICTOR:
//		Tomorow's value will be equal to today's

//		Column 1: Naive prediction (today)
//		Column 2: Actual value (tomorrow)

		printf("%f %f\n", y[0], y[1]);
		y[0] = y[1];
	}

	return 0;
}
