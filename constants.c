/*Includes Section*/
#include "constants.h"

/*Functions Definition Section*/
void Constants(int conv) {
Constants_:
	while (conv != 12) {
		red();
		printf("Please enter the constant you want: \n");
		magenta();
		printf("1. PI(%c)\n2. Eular's Number(e)\n3. Golden Ration(%c)\n4. Speed of light in vacuum(c)\n5. Gravity's Acceleration(g)\n6. Magnetic Constant(%c)\n7. Plank's Constant(h)\n8. Electron Mass(me)\n9. Proton Mass(mp)\n10. Avogadro's Number(NA)\n11. Electron Charge\n12. Exit\n", 227, 232, 230);
		reset();
		scanf_s("%d", &conv);
		if (conv == 1) {
			printf("%c = %f\n", 227, M_PI);
		}
		else if (conv == 2) {
			printf("e = %f\n", exp(1));
		}
		else if (conv == 3) {
			printf("%c = %f\n", 232, M_PHI);
		}
		else if (conv == 4) {
			printf("c = %d m/s\n", M_C);
		}
		else if (conv == 5) {
			printf("g = %d m/s2\n", M_G);
		}
		else if (conv == 6) {
			const double M_MC = 4.0 * M_PI;
			printf("%c = %fE-7 N/A2\n", 230, M_MC);
		}
		else if (conv == 7) {
			printf("h = %fE-34 J.s\n", M_H);
		}
		else if (conv == 8) {
			printf("me = %fE-31 kg\n", M_ME);
		}
		else if (conv == 9) {
			printf("mp = %fE-27 kg\n", M_MP);
		}
		else if (conv == 10) {
			printf("NA = %fE23 mol-1\n", AVOGADRO);
		}
		else if (conv == 11) {
			printf("e = %fE-19 C\n", M_EC);
		}
		else if (conv == 12) {
			break;
		}
		else {
			printf("Please enter a valid value!!\n");
			goto Constants_;
		}
	}
}
