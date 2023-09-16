//============================================================================
// Name        : firstProject.cpp
// Author      : tr3zv1y
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
# define M_PI
#include <cmath>
#include <iomanip>

int mai()
{
	double R;
	std::cin >> R;
	std::cout << std::setprecision(15) << M_PI * R * R;
	return 0;
}
