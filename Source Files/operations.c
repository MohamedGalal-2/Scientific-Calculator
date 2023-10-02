#include <stdio.h>
#include <stdarg.h>

float sum = 0.0;
int i;

float operations(float num, ...)
{
	va_list args;

	va_start(args, num);

	for (i = 0; i < num; i++)
	{
		float x = va_arg(args, float);
		sum += x;
	}

	va_end(args);

	return sum;
}