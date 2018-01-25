#ifndef SQUARE_H
#define SQUARE_H

struct Point {
	float x;
	float y;
}typedef Point;

struct data {
	Point first;
	Point second;
}typedef data;

float acreage (data square);

float perimetr (data square);

data create_struct (struct data square);

#endif

