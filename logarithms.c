/*Inlcudes Section*/
#include "logarithms.h"

/*Functions Definition Section*/
float Log(float Number_2, float Number_1) {
	float Result;
Logarithm:
	printf("Please enter the base value: ");
	scanf_s("%f", &Number_2);
	if (Number_2 <= 0) {
		printf("Please enter a positive value!!\n");
		goto Logarithm;
	}
	else {
		printf("Please enter the value: ");
		scanf_s("%f", &Number_1);
		if (Number_1 <= 0) {
			printf("Please enter a valid value!!\n");
			goto Logarithm;
		}
		else {
			Result = log10(Number_1) / log10(Number_2);
			printf("Log%f(%f) = %f \n", Number_2, Number_1, Result);
		}
	}

}

float LN(float Number_1) {
	float Result;
LN_:

	printf("Please enter the value: ");
	scanf_s("%f", &Number_1);
	if (Number_1 <= 0) {
		printf("Please enter a valid value!!\n");
		goto LN_;
	}
	else {
		Result = log10(Number_1) / log10(exp(1));
		printf("ln(%f) = %f \n", Number_1, Result);
	}
}

float Exponential(float Number_1) {
	float Result;
	printf("Please enter the value: ");
	scanf_s("%f", &Number_1);
	Result = exp(Number_1);
	printf("e^%f = %f \n", Number_1, Result);
}