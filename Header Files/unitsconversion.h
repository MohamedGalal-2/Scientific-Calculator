/*File Guard*/
#ifndef _UNITCONVERTER_H_
#define _UNITCONVERTER_H_

/*Includes Section*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Macros Definition Section*/
#define M_PI (3.14159265358979323846) /*PI Value*/
#define M_PHI (1.618033988749894) /*Golden Ration*/
#define M_C (299792458) /*Speed of Light*/
#define M_G (9.80665) /*Gravity Acceleration*/
#define M_H (6.62607015) /*Planck's Constant*/
#define M_ME (9.1093837015) /*Electron Mass*/
#define M_MP (1.67262192369) /*Proton Mass*/
#define AVOGADRO (6.02214076) /*Avogadro's Number*/
#define M_EC (1.602176634) /*Elementary Charge*/

/*Function Decleration Section*/
float Length(unsigned short int, float);
float Area(unsigned short int, float);
float Volume(unsigned short int, float);
float Mass(unsigned short int, float);
float Velocity(unsigned short int, float);
float Pressure(unsigned short int, float);
float Energy(unsigned short int, float);
float Power_2(unsigned short int, float);
float Temperature(unsigned short int, float);
#endif