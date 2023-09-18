/*Include Section*/
#include "..\Header Files\main.h"

/**************************************************
*Author: Mohamed Galal                            *
*Program: Scientific Calculator			          *
*Version: V2.6.0                                  *
*Last Update: 19/09/2023                          *
**************************************************/

/*Main Function*/
int main() {
	while (op != 16) {
		cyan();
		printf("Please choose the operation you want to perform : \n");
		yellow();
		for (int i = 0; i < 15; i++) {
			printf("%s\n", Operations[i]);
		}
		reset();
		scanf_s("%d", &op);
		switch (op) {
		case 1:
			green();
			printf("Summution:\n");
			reset();
			Summution(op, Number_1);
			break;
		case 2:
			red();
			printf("Subtraction:\n");
			reset();
			Subtraction(Number_1, Number_2);
			break;
		case 3:
			blue();
			printf("Multiplication:\n");
			reset();
			Multiplication(Number_1, Number_2);
			break;
		case 4:
			magenta();
			printf("Division:\n");
			reset();
			Division(Number_1, Number_2);
			break;
		case 5:
			reset();
			printf("Power:\n");
			reset();
			Power(Number_1, Number_2);
			break;
		case 6:
			green();
			printf("Modulus:\n");
			reset();
			Modulus(Number_3, Number_4);
			break;
		case 7:
			red();
			printf("Square Root:\n");
			reset();
			Square_Root(Number_1);
			break;
		case 8:
			blue();
			printf("Factorial:\n");
			reset();
			Fact:
			printf("Please enter the number: ");
			scanf_s("%d", &Number_3);
			if (Number_3 < 0) {
				red();
				printf("Please enter a positive number!!\n");
				reset();
				goto Fact;
			}
			else {
				printf("The Factorial of the number %d = %d\n", Number_3, Factorial(Number_3));
				break;
			}
		case 9:
		Conversions:
			while (op_2 != 10) {
				magenta();
				printf("Units Conversion:\n");
				reset();
				printf("Choose the physical quantity you want to convert: \n");
				green();
				for (int i = 0; i < 10; i++) {
					printf("%s\n", Units[i]);
				}
				reset();
				scanf_s("%d", &op_2);
				if (op_2 == 1) {
					Length(conv, Number_1);
					break;
				}
				else if (op_2 == 2) {
					Area(conv, Number_1);
					break;
				}
				else if (op_2 == 3) {
					Volume(conv, Number_1);
					break;
				}
				else if (op_2 == 4) {
					Mass(conv, Number_1);
					break;
				}
				else if (op_2 == 5) {
					Velocity(conv, Number_1);
					break;
				}
				else if (op_2 == 6) {
					Pressure(conv, Number_1);
					break;
				}
				else if (op_2 == 7) {
					Energy(conv, Number_1);
					break;
				}
				else if (op_2 == 8) {
					Power_2(conv, Number_1);
					break;
				}
				else if (op_2 == 9) {
					Temperature(conv, Number_1);
					break;
				}
				else if (op_2 == 10) {
					break;
				}
				else {
					printf("Please enter a valid quantity\n");
					goto Conversions;
				}
			}
			break;
		case 10:
			Log(Number_2, Number_1);
			break;
		case 11:
			LN(Number_1);
			break;
		case 12:
			Exponential(Number_1);
			break;
		case 13:
			Trig(conv, trig_op, Number_1);
			break;
		case 14:
			Hyperbolic(conv, Number_1);
			break;
		case 15:
			Constants(conv);
			break;
		case 16:
			break;
		default:
			printf("Please enter a valid operation\n");
			break;
		}
	}
	return 0;
}
