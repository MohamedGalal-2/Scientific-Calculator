#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "hyperbolic.h"
#include "trigfunctions.h"
#define M_PI 3.14159265358979323846

float Hyperbolic(int conv, float Number_1) {
	float Result;
Hyperbolic:
	while (conv != 10) {
		red();
		printf("Please enter the trignometric function you want: \n");
		magenta();
		printf("1. sinh\n2. cosh\n3. tanh\n4. coth\n5. sech\n6. csch\n7. arcsinh\n8. arccosh\n9. arctanh\n10. Exit\n");
		reset();
		scanf_s("%d", &conv);
		if (conv == 1) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = sinh(Number_1);
			printf("sinh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 2) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = cosh(Number_1);
			printf("cosh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 3) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = tanh(Number_1);
			printf("tanh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 4) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = 1 / tanh(Number_1);
			printf("tanh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 5) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = 1 / cosh(Number_1);
			printf("sech(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 6) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = 1 / sinh(Number_1);
			printf("csch(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 7) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = asinh(Number_1);
			printf("asinh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 8) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			Result = acosh(Number_1);
			printf("acosh(%f) = %f\n", Number_1, Result);
		}
		else if (conv == 9) {
			printf("Please enter the value: ");
			scanf_s("%f", &Number_1);
			if (Number_1 < -1 || Number_1 >1) {
				printf("Please enter a valid value!!\n");
				goto Hyperbolic;
			}
			else {
				Result = atanh(Number_1);
				printf("atanh(%f) = %f\n", Number_1, Result);
			}
		}
		else if (conv == 10) {
			break;
		}
		else {
			printf("Please enter a valid value!!\n");
			goto Hyperbolic;
		}
	}
}
