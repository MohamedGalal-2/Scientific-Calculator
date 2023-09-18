/*Includes Section*/
#include "..\Header Files\unitsconversion.h"

char *(LengthConversions)[8] = { "1. In>cm", "2. cm>In", "3. ft>m", "4. m>ft", "5. yd>m", "6. m>yd", "7. mile>km", "8. km>mile" };

/*Functions Definition Section*/
float Length(unsigned short int conv, float Number_1) {
	float Result;
	printf("Length:\n");
	printf("Choose the conversion you want to perform: \n");
	for(int i = 0; i < 8; i++) {
		printf("%s\n", LengthConversions[i]);
	}
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
	printf("Temperature:\n");
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
