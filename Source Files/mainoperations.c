/*Inlcudes Section*/
#include "..\Header Files/mainoperations.h"

/*Functions Definition Section*/
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
	if (0 == Number_3) {
		return 1;
	}
	else {
		return Number_3 * Factorial(Number_3 - 1);
	}
}
