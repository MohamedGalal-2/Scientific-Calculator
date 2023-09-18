/*File Guard*/
#ifndef _MAIN_H_
#define _MAIN_H_

/*Include Section*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "..\Header Files/colors.h"
#include "..\Header Files/mainoperations.h"
#include "..\Header Files/unitsconversion.h"
#include "..\Header Files/logarithms.h"
#include "..\Header Files/trigfunctions.h"
#include "..\Header Files/hyperbolic.h"
#include "..\Header Files/constants.h"

/*Global Variables Section*/
float Number_1, Number_2;
int Number_3, Number_4;
unsigned short int conv, op_2, op, trig_op;
char* (Units)[10] = { "1. Length", "2. Area", "3. Volume", "4. Mass", "5. Velocity", "6. Pressure", "7. Energy", "8. Power", "9. Temperature", "10. Exit" };
char* (Operations)[16] = { "1. Summution", "2. Subtraction", "3. Multiplication", "4. Division", "5. Power", "6. Modulus", "7. Square root", "8. Factorial", "9. Units Conversion", "10. Log", "11. ln", "12. Exponential Function", "13. Trignometric Functions", "14. Hyperbolic Functions", "15. Constants", "16. Exit" };
#endif