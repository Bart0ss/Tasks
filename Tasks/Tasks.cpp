// Tasks.cpp : Defines the entry point for the console application.
//

#define _USE_MATH_DEFINES
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <math.h>
#define M_PI 3.14159265359
#define M_E 2.71828182845

struct Point
{
	double x;
	double y;
};

double distanceBetweenTwoPoints(Point a, Point b)
{
	return sqrt(	pow((b.x - a.x),2) + pow((b.y - a.y),2)		);
}

bool Algo1()
{
	Point a, b, c;

	std::cout << "Point A: " << std::endl;
	std::cin >> a.x;
	std::cin >> a.y;
	std::cout << "Point B: " << std::endl;
	std::cin >> b.x;
	std::cin >> b.y;
	std::cout << "Point C: " << std::endl;
	std::cin >> c.x;
	std::cin >> c.y;

	double distance_AB = distanceBetweenTwoPoints(a, b);
	double distance_AC = distanceBetweenTwoPoints(a, c);
	double distance_CB = distanceBetweenTwoPoints(c, b);

	double distances[3] = { distance_AB, distance_AC, distance_CB};
	std::sort(distances, distances + 3);
	
	return (pow(distances[0], 2) + pow(distances[1], 2) == pow(distances[2], 2)) ? true : false;
}

bool Task1()
{
	int x;
	std::cin >> x;

	return (x >= 10 && x < 20) ? true : false;
}

bool Task2()
{
	int x;
	int y;
	std::cin >> x;
	std::cin >> y;

	return ((x > -20 && x <= 5) && (y>= 15 && y <= 100)) ? true : false;
}

bool Task3()
{
	int x;
	int y;
	std::cin >> x;
	std::cin >> y;

	return ((x > 20 && x < 40) || (y >= 23 && y < 27)) ? true : false;
}

double Task41()
{
	double x;
	double y;
	std::cin >> x;
	std::cin >> y;

	return 1. / 8. * sqrt(x + 2*y) - pow(M_E, 3) + M_PI;
}

double Task42()
{
	double x;
	double y;
	std::cin >> x;
	std::cin >> y;

	double output = 1. / tan(pow(2, x + 1));
	output += (	2*pow(x,y) + M_E - 10) / ( abs((log(x+1))));
	output -= pow(	((x*y)/pow(M_PI,2)), (1. / 3.)	);

	return output;
}

void FindingSolutionsOfQuadraticEquation(double a, double b, double c)
{
	double Δ = b*b - 4 * a*c;
	// assumed that Δ > 0
	std::cout << "root1: " << (-b + sqrt(Δ)) / (2. * a) << std::endl;
	std::cout << "root2: " << (-b - sqrt(Δ)) / (2. * a) << std::endl;
}

void Converter_From_10_to_16(int x)
{
	std::cout << x << "(10) = " << std::hex << x << "(16)" << std::endl;
}
void Converter_From_10_to_8(int x)
{
	std::cout << x << "(10) = " << std::oct << x << "(16)" << std::endl;
}
void Converter_From_16_to_10(uint32_t x = 0xff)
{
	std::cout << x << "(16) = " << std::dec << x << "(10)" << std::endl;
}

void Converter_From_10_to_16(double x)
{
	std::cout << "non-int types 're only avaliable for 500$ PREMIUM ™ Users";
	if (x == 10)
	{																														/*
		 return 16;																														*/
	}
}

int Task7()
{
	int n;
	std::cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}
	return sum;
}

int Task8()
{
	int n;
	std::cin >> n;

	int counter = 0;
	int sum = 0;
	int temporary;
	while (counter < 5)
	{
		std::cin >> temporary;
		if (temporary % 2 == 0)
		{
			counter++;
			sum += temporary;
		}
	}
	return sum;
}

int Task9()
{
	int input;
	int sum = 0;
	do 
	{
		std::cin >> input;
		sum -= input;
	} while (input != -111);
	return sum;
}

void Task10()
{
	for (int x = 1; x <= 10; x++)
	{
		std::cout << 1. / 4. * sqrt(x + 2) - pow(M_E, (3 * x + (M_PI / 2))) << std::endl;
	}
}

void Task11()
{
	double x, y;
	std::cin >> x;
	std::cin >> y;
	double output = 0;
	for (int i = 1; i <= 10; i++)
	{
		double first_part = 1. / 3. * sin(x);
		double temporary_calculations = 0;
		for (int j = 3; j > -2; j--)
		{
			temporary_calculations += sqrt(x + 2 * y) - pow(M_E, 3 * x + (M_PI / 2));
		}
		output += (first_part += temporary_calculations);
	}
	std::cout << output;
}
int main()
{
	// who uses SOLID anyway?

	return 0;
}