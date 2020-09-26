#include <iostream>

#define PI 3.14
#define CARACTERDEFINIDO 'a'
#define CADENADEFINIDA "estoEsUnaCadena"

const float lado = 10.12;


int main()
{

int numeroUno; 
int numeroDos;
int numeroTres;
int resultado;


char caracter;

float flotante;

double numeroDoble;

//void numeroVoid;

bool numeroBuleano;

numeroUno = 1;
numeroDos = 2;
numeroTres = 3;

resultado = numeroUno + numeroDos + numeroTres;

caracter = 'a';

flotante = 1.2;

flotante = 1.1;

//numeroVoid = void;

numeroBuleano = true; 

std::cout << "Hola mundo" << std::endl;

std::cout << "resultado: " << std::endl;

std::cout << resultado << std::endl;

std::cout << "caracter: " << std::endl;

std::cout << caracter << std::endl;

unsigned char _unsigned_char = '0';
unsigned int _unigned_int = 65;
unsigned short int _int_short = 1;
unsigned long int _int_long = 12;


std::cout << "unsigned seleccionado: " << _unsigned_char << std::endl; 

std::cout << "el numero definido: " << PI << std::endl;

std::cout << "La cadena definida es: " << CADENADEFINIDA << std::endl;

std::cout << "El caracter definido es: " << CARACTERDEFINIDO << std::endl;

std::cout << "El lado de la variable constante es: " << lado << std::endl;

int *mi_puntero;
int edad;
mi_puntero = &edad; 

edad = *mi_puntero;

std::cout << "puntero edad: " << edad << std::endl;

std::cout << "bien, la declaracion de datos ya esta dominada" << std::endl;

char variableChar = 'b';
	
short int IntCorto = 3;

void funcion();

int *mi_puntero_;
int edad_ = 18;
mi_puntero_ = &edad_;
edad_ = *mi_puntero_ +1;

std::cout << mi_puntero_ << std::endl;


std::cout << "otro commit" << std::endl;


return 0;
}
