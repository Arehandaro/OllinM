#include <iostream>
#define CLAVE 123

int main()
{ 

int numero;
do 
{
	std::cout << "----------" << std::endl;
	std::cout << "\nMENU\n" << std::endl;
	std::cout << "----------" << std::endl;
	std::cout << "1 Juego nuevo\n" << std::endl;
	std::cout << "2 Abrir juego\n" << std::endl;
	std::cout << "3 Guardar juego\n" << std::endl;
	std::cout << "4 Ver puntuaciones\n" << std::endl;
	std::cout << "0 Salir\n" << std::endl;
	std::cout << "----------\n" << std::endl;

std::cout << "Escribe un numero para cada accion" << std::endl;
std::cin >> numero;

fflush(stdin);
switch (numero)
{
	case 1: 	std::cout << "Juego nuevo\n" << std::endl;

		break;
	case 2:		std::cout << "Abrir juego\n" << std::endl;

	       break;
	case 3:		std::cout << "Guardar juego\n" << std::endl;

		break;
	case 4:		std::cout << "Ver puntuaciones\n" << std::endl;

		break;
	case 0:		std::cout << "Salir\n" << std::endl;

		break;
	default: std::cout << "\n Ha elegido una opcion no valida\n" << std::endl;
}
std::cout << "Pulse intro para continuar\n" << std::endl;
std::cin.get();
}
while(numero != 0);




std::cout << "Pulsa intro para continuar" << std::endl;
fflush(stdin);
std::cin.get();

}
