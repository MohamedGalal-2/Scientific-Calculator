/*Include Section*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

/**************************************************
*Creator: Mohamed Galal                           *
*Program: Simple Calculator		          *
*Version: V2.4.0                                  *
*Last Update: 19/08/2023                          *
**************************************************/

/*Global Variables Section*/
float Number_1, Number_2, Result, Degree, Radian;
int Number_3, Number_4, Result_2 = 1;
unsigned short int conv, op_2, op, trig_op;

/*Decleration Section*/
float Summution(float, float);
float Subtraction(float, float);
float Multiplication(float, float);
float Division(float, float);
float Power(float, float);
int Modulus(int, int);
float Square_Root(float);
int Factorial(int);
float Length(unsigned short int, float);
float Area(unsigned short int, float);
float Volume(unsigned short int, float);
float Mass(unsigned short int, float);
float Velocity(unsigned short int, float);
float Pressure(unsigned short int, float);
float Energy(unsigned short int, float);
float Power_2(unsigned short int, float);
float Temperature(unsigned short int, float);
float Rad(float);
float Trig(unsigned short int, unsigned short int, float);
float Log(float);
float Exponential(float);

/*Main Function*/
int main() {
	while (op !=13) {
		printf("Please choose the operation you want to perform : \n");
		printf("1. Summution\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Modulus\n7. Square root\n8. Factorial\n9. Units Conversion\n10. Trignometric Functions\n11. Log\n12. Exponential Function\n13. Exit\n");
		scanf_s("%d", &op);

		switch (op) {
		case 1:
			printf("Summution:\n");
			Summution(Number_1, Number_2);
			break;
		case 2:
			printf("Subtraction:\n");
			Subtraction(Number_1, Number_2);
			break;
		case 3:
			printf("Multiplication:\n");
			Multiplication(Number_1, Number_2);
			break;
		case 4:
			printf("Division:\n");
			Division(Number_1, Number_2);
			break;
		case 5:
			printf("Power:\n");
			Power(Number_1, Number_2);
			break;
		case 6:
			printf("Modulus:\n");
			Modulus(Number_3, Number_4);
			break;
		case 7:
			printf("Square Root:\n");
			Square_Root(Number_1);
			break;
		case 8:
			printf("Factorial:\n");
			Factorial(Number_3);
			break;
		case 9: 
			Conversions:
			while (op_2 !=10) {
				printf("Units Conversion:\n");
				printf("Choose the physical quantity you want to convert: \n");
				printf("1. Length\n2. Area\n3. Volume\n4. Mass\n5. Veloity\n6. Pressure\n7. Energy\n8. Power\n9. Temperature\n10. Exit\n");
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
			Trig(conv, trig_op, Number_1);
			break;
		case 11:
			Log(Number_1);
			break;
		case 12:
		Exponential(Number_1);
			break;
		case 13:
			break;
		default:
			printf("Please enter a valid operation\n");
			break;
		}
	}
	return 0;
}
/*Functions Section*/
float Summution(float Number_1, float Number_2) {
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 + Number_2;
	printf("The sum of the two numbers is: %.3f\n", Result);
	Result = 0;
}

float Subtraction(float Number_1, float Number_2) {
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 - Number_2;
	printf("The subtraction of the two numbers is: %.3f\n", Result);
	Result = 0;
}

float Multiplication(float Number_1, float Number_2) {
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 * Number_2;
	printf("The Multiplication of the two numbers is: %.3f\n", Result);
	Result = 0;
}

float Division(float Number_1, float Number_2) {
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = Number_1 / Number_2;
	printf("The Division of the two numbers is: %.3f\n", Result);
	Result = 0;
}

float Power(float Number_1, float Number_2) {
	printf("Please enter the fist number: ");
	scanf_s("%f", &Number_1);

	printf("Please enter the second number: ");
	scanf_s("%f", &Number_2);

	Result = pow(Number_1, Number_2);
	printf("The Power of the two numbers is: %.3f\n", Result);
	Result = 0;
}

int Modulus(int Number_3, int Number_4) {
	printf("Please enter the first number: ");
	scanf_s("%d", &Number_3);

	printf("Please enter the second number: ");
	scanf_s("%d", &Number_4);

	Result_2 = Number_3 % Number_4;
	printf("The Modulus of the two numbers is: %d\n", Result_2);
	Result = 0;
}

float Square_Root(float Number_1) {
	printf("Please enter the number: ");
	scanf_s("%f", &Number_1);


	Result = sqrt(Number_1);
	printf("The Square root of the number is: %.3f\n", Result);
	Result = 0;
}

int Factorial(int Number_3) {
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

	printf("The Factorial of the number is: %d\n", Result_2);
	Result_2 = 1;
}

float Length(unsigned short int conv, float Number_1) {
	float Result;
	printf("Length:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. In>cm\n2. cm>In\n3. ft>m\n4. m>ft\n5. yd>m\n6. m>yd\n7. mile>km\n8. km>mile\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 2.54;
		printf("%.3f In = %.3f cm\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 2.54;
		printf("%.3f cm = %.3f In\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.3048;
		printf("%.4f ft = %.4f m\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.3048;
		printf("%.4f m = %.4f ft\n", Number_1, Result);
	}
	else if (conv == 5) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.9144;
		printf("%.5f yd = %.5f m\n", Number_1, Result);
	}
	else if (conv == 6) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.9144;
		printf("%.5f m = %.5f yd\n", Number_1, Result);
	}
	else if (conv == 7) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 1.609344;
		printf("%.6f mile = %.6f km\n", Number_1, Result);
	}
	else if (conv == 8) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 1.609344;
		printf("%.6f km = %.6f mile\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Area(unsigned short int conv, float Number_1) {
	float Result;
	printf("Area:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. Acre>m2\n2. m2>Acre\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 4046.85642;
		printf("%.5f Acre = %.5f m2\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 4046.85642;
		printf("%.5f m2 = %.5f Acre\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Volume(unsigned short int conv, float Number_1) {
	float Result;
	printf("Volume:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. m3>L\n2. L>m3\n3. gal(US)>L\n4. L>gal(US)\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 1000;
		printf("%.3f m3 = %.3f L\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 1000;
		printf("%.3f L = %.3f m3\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 3.785411784;
		printf("%.5f gal(US) = %.5f L\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 3.785411784;
		printf("%.5f L = %.5f gal(US)\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Mass(unsigned short int conv, float Number_1) {
	float Result;
	printf("Mass:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. oz>g\n2. g>oz\n3. Ib>kg\n4. kg>Ib\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 28.3495231;
		printf("%.5f oz = %.5f gm\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 28.3495231;
		printf("%.5f gm = %.5f oz\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.45359237;
		printf("%.5f Ib = %.5f kg\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.45359237;
		printf("%.5f kg = %.5f Ib\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Velocity(unsigned short int conv, float Number_1) {
	float Result;
	printf("Velocity:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. km/h>m/s\n2. m/s>km/h\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.27777778;
		printf("%.5f km/h = %.5f m/s\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.27777778;
		printf("%.5f m/s = %.5f km/h\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Pressure(unsigned short int conv, float Number_1) {
	float Result;
	printf("Pressure:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. atm>Pa\n2. Pa>atm\n3. mmHg>Pa\n4. Pa>mmHg\n5. kgf/cm2>Pa\n6. Pa>kgf/cm2\n7. Ibf/In2>KPa\n8. KPa>Ibf/In2\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 101325;
		printf("%.5f atm = %.5f Pa\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 101325;
		printf("%.5f Pa = %.5f atm\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 133.32239;
		printf("%.5f mmHg = %.5f Pa\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 133.32239;
		printf("%.5f Pa = %.5f mmHg\n", Number_1, Result);
	}
	else if (conv == 5) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 98066.5;
		printf("%.5f kgf/cm2 = %.5f Pa\n", Number_1, Result);
	}
	else if (conv == 6) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 98066.5;
		printf("%.5f Pa = %.5f kgf/cm2\n", Number_1, Result);
	}
	else if (conv == 7) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 6.89476;
		printf("%.5f Ibf/In2 = %.5f KPa\n", Number_1, Result);
	}
	else if (conv == 8) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 6.89476;
		printf("%.5f KPa = %.5f Ibf/In2\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Energy(unsigned short int conv, float Number_1) {
	float Result;
	printf("Energy:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. kgf.m>J\n2. J>Kgf.m\n3. J<Cal\n4. Cal>J\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 9.8066;
		printf("%.5f kgf.m = %.5f J\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 9.8066;
		printf("%.5f J = %.5f kgf.m\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.23900574;
		printf("%.5f J = %.5f Cal\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.23900574;
		printf("%.5f Cal = %.5f J\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Power_2(unsigned short int conv, float Number_1) {
	float Result;
	printf("Power:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. hp>KW\n2. KW>hp\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 * 0.74569987;
		printf("%.5f hp = %.5f KW\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 / 0.74569987;
		printf("%.5f KW = %.5f hp\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Temperature(unsigned short int conv, float Number_1) {
	float Result;
	printf("Energy:\n");
	printf("Choose the unit you want to convert from: \n");
	printf("1. F>C\n2. C>F\n3. K>C\n4. C>K\n5. R>C\n6. C>R\n");
	scanf_s("%d", &conv);
	if (conv == 1) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = (5.0 / 9.0) * (Number_1 - 32.0);
		printf("%.5f F = %.5f C\n", Number_1, Result);
	}
	else if (conv == 2) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = (9.0 / 5.0) * Number_1 + 32.0;
		printf("%.5f C = %.5f F\n", Number_1, Result);
	}
	else if (conv == 3) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 - 273.15;
		printf("%.5f K = %.5f C\n", Number_1, Result);
	}
	else if (conv == 4) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = Number_1 + 273.15;
		printf("%.5f C = %.5f K\n", Number_1, Result);
	}
	else if (conv == 5) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = (Number_1 * 5.0 / 9.0) - 273.15;
		printf("%.5f R = %.5f C\n", Number_1, Result);
	}
	else if (conv == 6) {
		printf("Please enter the quantity: ");
		scanf_s("%f", &Number_1);
		Result = (Number_1 + 273.15) * 9.0 / 5.0;
		printf("%.5f C = %.5f R\n", Number_1, Result);
	}
	else {
		printf("Please enter a valid value!!\n");
	}
}

float Rad(float Degree) {
	return Radian = Degree * (M_PI / 180.0);
}

float Trig(unsigned short int conv, unsigned short int trig_op, float Number_1) {
	float Result, Degree;
	while (conv != 10) {
		printf("Please enter the trignometric function you want: \n");
		printf("1. sin\n2. cos\n3. tan\n4. cot\n5. sec\n6. cosec\n7. arcsin\n8. arccos\n9. arctan\n10. Exit\n");
		scanf_s("%d", &conv);
		if (conv == 1) {
			printf("Choose Rad for radians or Deg for degrees: \n");
			printf("1. Rad\n2. Deg\n");
			scanf_s("%d", &trig_op);
			if (trig_op == 1) {
				printf("Please enter the radian value: ");
				scanf_s("%f", &Number_1);
				Result = sin(Number_1);
				printf("Sin(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = sin(Number_1);
				printf("Sin(%f) = %f\n", Degree, Result);
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
				printf("Cos(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = cos(Number_1);
				printf("Cos(%f) = %f\n", Degree, Result);
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
				printf("Tan(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = tan(Number_1);
				printf("Tan(%f) = %f\n", Degree, Result);
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
				printf("Cot(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / tan(Number_1);
				printf("Cot(%f) = %f\n", Degree, Result);
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
				printf("Sec(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / cos(Number_1);
				printf("Sec(%f) = %f\n", Degree, Result);
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
				printf("Cosec(%f) = %f\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the degree: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Number_1 = Rad(Number_1);
				Result = 1.0 / sin(Number_1);
				printf("Cosec(%f) = %f\n", Degree, Result);
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
				if(Number_1 <-1 || Number_1 >1) {
					printf("Please enter a valid value!!\n");
				}
				else {
					Result = asin(Number_1) / M_PI;
					printf("arcsin(%f) = %fPI\n", Number_1, Result);
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
					printf("arcsin(%f) = %f\n", Degree, Result);
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
					printf("arccos(%f) = %fPI\n", Number_1, Result);
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
					printf("arccos(%f) = %f\n", Degree, Result);
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
				printf("arctan(%f) = %fPI\n", Number_1, Result);
			}
			else if (trig_op == 2) {
				printf("Please enter the value: ");
				scanf_s("%f", &Number_1);
				Degree = Number_1;
				Result = 180.0 * atan(Number_1) / M_PI;
				printf("arctan(%f) = %f\n", Degree, Result);
			}
			else {
				printf("Please enter a valid value!!\n");
			}
		}
	}
}

float Log(float Number_1) {
	Logarithm:
	float Result;
	printf("Please enter the value: ");
	scanf_s("%f", &Number_1);
	if (Number_1 <= 0) {
		printf("Please enter a valid value!!\n");
		goto Logarithm;
	}
	else {
		Result = log10(Number_1);
		printf("Log10(%f) = %f \n", Number_1, Result);
	}
	
}

float Exponential(float Number_1) {
	float Result;
	printf("Please enter the value: ");
	scanf_s("%f", &Number_1);
	Result = exp(Number_1);
	printf("e^%f = %f \n", Number_1, Result);
 }
