
#include <stdio.h>
#include <math.h>


int main()
{
    float x = 10e-4;
	float y = 23.33E5;
	float z = 3.14158f;
	float t = exp(1);
	double x1 = 10e-4;
	double y1 = 23.33E5;
	double z1 = 3.14158f;
	double t1 = exp(1);
	long double x2 = 10e-4;
	long double y2 = 23.33E5;
	long double z2 = 3.14158f;
	long double t2 = exp(1);

	printf("X=%f\n", x);
	printf("Y=%f\n", y);
	printf("Z=%f\n", z);
	printf("T=%f\n", t);
	printf("X1=%lf\n", x1);
	printf("Y1=%lf\n", y1);
	printf("Z1=%lf\n", z1);
	printf("T1=%lf\n", t1);
	printf("X2=%Lf\n", x2);
	printf("Y2=%Lf\n", y2);
	printf("Z2=%Lf\n", z2);
	printf("T2=%Lf\n", t2);

	printf("X=%.2f\n", x);
	printf("Y=%.2f\n", y);
	printf("Z=%.2f\n", z);
	printf("T=%.2f\n", t);



}


