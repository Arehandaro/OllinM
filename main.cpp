#include <iostream>
#include <stdio.h>

int main(void)
{
	float vector [4][3]
	{
		1, 1, 1,
		2, 2, 2, 
		3, 3, 3,
	        4, 4, 4	
	};

	vector [0][0]= 45;

	std::cout << "\nEl valor del vector 0_0 es: " << std::endl;

	std::cout << vector[0][0];
	
	std::cout << "\nIntroduce el nuevo valor del vector 0_0" << std::endl;

	std::cin >> vector [0][0];

	std::cout << "\nEl nuevo valor del vector 0_0 es: " << std::endl;

	std::cout << vector [0][0];

	std::cout << "\nPulsa intro para salir" << std::endl;

	fflush(stdin);
	getchar();
}
