/*Include Section*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "colors.h"
#include "mainoperations.h"
#include "unitsconversion.h"
#include "logarithms.h"
#include "trigfunctions.h"
#include "hyperbolic.h"
#include "constants.h"

/**************************************************
*Creator: Mohamed Galal                           *
*Program: Scientific Calculator			  *
*Version: V2.6.0                                  *
*Last Update: 19/08/2023                          *
**************************************************/

/*Global Variables Section*/
float Number_1, Number_2;
int Number_3, Number_4;
unsigned short int conv, op_2, op, trig_op;

/*Main Function*/
int main() {
	while (op !=16) {
		cyan();
		printf("Please choose the operation you want to perform : \n");
		yellow();
		printf("1. Summution\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Modulus\n7. Square root\n8. Factorial\n9. Units Conversion\n10. Log\n11. ln\n12. Exponential Function\n13. Trignometric Functions\n14. Hyperbolic Functions\n15. Constants\n16. Exit\n");
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
			Factorial(Number_3);
			break;
		case 9: 
			Conversions:
			while (op_2 !=10) {
				magenta();
				printf("Units Conversion:\n");
				reset();
				printf("Choose the physical quantity you want to convert: \n");
				green();
				printf("1. Length\n2. Area\n3. Volume\n4. Mass\n5. Veloity\n6. Pressure\n7. Energy\n8. Power\n9. Temperature\n10. Exit\n");
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
			Log(Number_2 ,Number_1);
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
