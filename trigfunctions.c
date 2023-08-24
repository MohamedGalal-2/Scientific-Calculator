#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "trigfunctions.h"
#define M_PI 3.14159265358979323846


float Rad(float Degree) {
	float Radian;
	return Radian = Degree * (M_PI / 180.0);
}

float Trig(unsigned short int conv, unsigned short int trig_op, float Number_1) {
	float Result, Degree;
	while (conv != 10) {
		cyan();
		printf("Please enter the trignometric function you want: \n");
		green();
		printf("1. sin\n2. cos\n3. tan\n4. cot\n5. sec\n6. cosec\n7. arcsin\n8. arccos\n9. arctan\n10. Exit\n");
		reset();
		scanf_s("%d", &conv);
		if (conv == 1) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = sin(Number_1);
				printf("sin(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = sin(Number_1);
				printf("sin(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 2) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = cos(Number_1);
				printf("cos(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = cos(Number_1);
				printf("cos(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 3) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = tan(Number_1);
				printf("tan(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = tan(Number_1);
				printf("tan(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 4) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = 1.0 / tan(Number_1);
				printf("cot(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / tan(Number_1);
				printf("cot(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 5) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = 1.0 / cos(Number_1);
				printf("sec(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / cos(Number_1);
				printf("sec(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 6) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = 1.0 / sin(Number_1);
				printf("csc(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / sin(Number_1);
				printf("csc(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 7) {
			printf("Choose Rad to get radians or Deg to get degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				if (Number_1 < -1 || Number_1 >1) {
					printf("Please enter a valid value!!\n");
				}
				else {
					Result = asin(Number_1) / M_PI;
					if (Result == 0) {
						printf("asin(%f) = %f\n", Number_1, Result);
					}
					else {
						printf("asin(%f) = %f%c\n", Number_1, Result, 227);
					}
				}
			}
			else if (trig_op == 2) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				if (Number_1 < -1 || Number_1 >1) {
					printf("Please enter a valid value!!\n");
				}
				else {
					Degree = Number_1;
					Result = 180.0 * asin(Number_1) / M_PI;
					printf("asin(%f) = %f\n", Degree, Result);
				}
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
		else if (conv == 8) {
			printf("Choose Rad to get radians or Deg to get degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				if (Number_1 < -1 || Number_1 >1) {
					printf("Please enter a valid value!!\n");
				}
				else {
					Result = acos(Number_1) / M_PI;
					if (Result == 0) {
						printf("acos(%f) = %f\n", Number_1, Result);
					}
					else {
						printf("acos(%f) = %f%c\n", Number_1, Result, 227);
					}
				}
			}
			else if (trig_op == 2) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				if (Number_1 < -1 || Number_1 >1) {
					printf("Please enter a valid value!!\n");
				}
				else {
					Degree = Number_1;
					Result = 180.0 * acos(Number_1) / M_PI;
					printf("acos(%f) = %f\n", Degree, Result);
				}
			}
			else {
				printf("Please enter a valid value!!\n");
			}

		}
		else if (conv == 9) {
			printf("Choose Rad to get radians or Deg to get degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				Result = atan(Number_1) / M_PI;
				if (Result == 0) {
					printf("atan(%f) = %f\n", Number_1, Result);
				}
				else {
					printf("atan(%f) = %f%c\n", Number_1, Result, 227);
				}

			}
			else if (trig_op == 2) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Result = 180.0 * atan(Number_1) / M_PI;
				printf("atan(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
	}
}
