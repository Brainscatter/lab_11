// lab11.cpp : Defines the entry point for the console application.
//

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "square.h"

int main(){
	data fig = { 0.0, 0.0, 0.0, 0.0 };
	float acr, per;
	fig = create_struct(fig);
	acr = acreage(fig);
	per = perimetr(fig);

	printf("acreage is: %f\nperimeter is: %f\n", acr, per);
	return 0;
}

