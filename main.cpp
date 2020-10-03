#include <iostream>
#define CLAVE 123

int main()
{ 

int numero;

std::cout << "----------------------" << std::endl;
std::cout << "\tMENU" << std::endl;
std::cout << "----------------------" << std::endl;

std::cout << "1 Juego nuevo ----> Pide contraseña" << std::endl;
std::cout << "2 Abrir juego" << std::endl;
std::cout << "3 Guardar juego" << std::endl;
std::cout << "4 Ver puntuaciones" << std::endl;
std::cout << "0 Salir" << std::endl;

std::cin >> numero;

switch (numero)
{
	case 1:
	
	       std::cout << "Escibe la contraseña: " << std::endl;
	       std::cin >> numero; 
	       while (numero != CLAVE)
	       {
	       	std::cout << "La contraseña es incorrecta" << std::endl;
		std::cout << "Escibe la contraseña: ";
		std::cin >> numero;
	       }

std::cout << "La contraseña es correcta" << std::endl;

	break;
case 2:
	std::cout << "Abrir juego" << std::endl;

	break;
case 3:
	std::cout << "Guardar juego" << std::endl;

	break;
case 4:
	std::cout << "Ver puntuaciones" << std::endl;

	break;
case 0:
	std::cout << "Salir" << std::endl;

	break;
default:
	std::cout << "Opcion incorrecta" << std::endl;


	
std::cout << "Pulsa intro para continuar" << std::endl;
fflush(stdin);
std::cin.get();

}



std::cout << "Pulsa intro para continuar" << std::endl;
fflush(stdin);
std::cin.get();
}
