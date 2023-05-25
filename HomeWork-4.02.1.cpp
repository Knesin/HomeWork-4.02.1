﻿#include <iostream>
using namespace std; 

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y; //изменено y -> m_y
	}
}; //поставлена  ;

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main() // изменено Main -> main
{
	int i;
	for (i = 0; i < 5; i++) { // убрана ; между ) {
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}

//Не запустится, т.к. описание ниже вызова.
//void print_point(const point& point_object) {
//	std::cout << "x:" << point_object.m_x << ", y: "
//		<< point_object.m_y << std::endl;
//}