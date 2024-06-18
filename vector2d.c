#include "vector2d.h"
#include <math.h>
#include <stdio.h>

void display_vector(const vec2d v) {
	printf("(%.3f, %.3f)", v.x, v.y);
}

double magnitude(const vec2d v) {
	return sqrt(v.x * v.x + v.y * v.y);
}

vec2d add(const vec2d v1, const vec2d v2) {
	vec2d result = {v1.x + v2.x, v1.y + v2.y};
	return result;
}

vec2d scale(const vec2d v, const double factor) {
	vec2d result = {v.x * factor, v.y * factor};
	return result; 
}
double dot_product(const vec2d v1, const vec2d v2) {
	return v1.x * v2.x + v1.y * v2.y;
}
	
