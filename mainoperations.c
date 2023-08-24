#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mainoperations.h"

float Summution(int op, float Number_1) {
	float Result = 0;
	printf("Please enter how many numbers you want to sum: \n");
	scanf_s("%d", &op);
	printf("Please enter the numbers you want to sum: \n");
	for (int i = 0; i < op; i++) {
		scanf_s("%f", &Number_1);
		Result += Number_1;
	}
	printf("The sum is: %.3f\n", Result);
}

float Subtraction(float Number_1, float Number_2) {
	float Result = 0;
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 - Number_2;
	printf("The subtraction of the two numbers is: %.3f\n", Result);
}

float Multiplication(float Number_1, float Number_2) {
	float Result = 0;
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 * Number_2;
	printf("The Multiplication of the two numbers is: %.3f\n", Result);
}

float Division(float Number_1, float Number_2) {
	float Result = 0;
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 / Number_2;
	printf("The Division of the two numbers is: %.3f\n", Result);
}

float Power(float Number_1, float Number_2) {
	float Result = 0;
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = pow(Number_1, Number_2);
	printf("The Power of the two numbers is: %.3f\n", Result);
}

int Modulus(int Number_3, int Number_4) {
	int Result_2 = 1;
	printf("Please enter the first number: ");
	scanf_s("%d", &Number_3);

	printf("Please enter the second number: ");
	scanf_s("%d", &Number_4);

	Result_2 = Number_3 % Number_4;
	printf("The Modulus of the two numbers is: %d\n", Result_2);
}

float Square_Root(float Number_1) {
	float Result = 0;
	printf("Please enter the number: ");
	scanf_s("%f", &Number_1);


	Result = sqrt(Number_1);
	printf("%c%.3f = %.3f\n", 251, Number_1, Result);
}

int Factorial(int Number_3) {
	int Result_2 = 1;
Fact:
	printf("Please enter the number: ");
	scanf_s("%d", &Number_3);

	if (Number_3 < 1) {
		printf("Please enter a positive number!!\n");
		goto Fact;
	}
	else {
		for (int i = 1; i <= Number_3; i++) {
			Result_2 *= i;
		}
	}

	printf("The Factorial of the number %d = %d\n",Number_3 ,Result_2);
}
