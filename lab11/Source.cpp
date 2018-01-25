#ifndef SQUARE_CPP
#define SQUARE_CPP
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include "square.h"

float acreage(data square){
	float s = (pow(square.second.x - square.first.x, 2) + pow(square.second.y - square.first.y, 2))/2;
	return s;
}

float perimetr(data square){
	float p = sqrt(pow(square.second.x - square.first.x, 2) + pow(square.second.y - square.first.y, 2)) * 2 * sqrt(2.0);
	return p;
}

data create_struct(data square){
	printf("Write the coordinates of the corner points:\n");
	printf("input the coordinates of first point:\n");
	printf("	x coordinate: ");
	scanf("%f", &square.first.x);
	printf("	y coordinate: ");
	scanf("%f", &square.first.y);
	printf("input the coordinates of second point:\n");
	printf("	x coordinate: ");
	scanf("%f", &square.second.x);
	printf("	y coordinate: ");
	scanf("%f", &square.second.y);
	return square;
}

#endif