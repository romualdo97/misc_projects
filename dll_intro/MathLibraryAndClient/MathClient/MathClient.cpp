// MathClient.cpp: define el punto de entrada de la aplicación de consola.
// importar dll usando el asistente de referencias de visual studio
// mirese la pestaña "referencias" en el "explorador de solucion"

#include "stdafx.h"
#include <MathLibrary.h>


int main()
{
	std::cout << "1.0 + 2.0 = " << MathLibrary::Functions::Add(1.0, 2.0) << std::endl;
	std::cout << "1.0 * 2.0 = " << MathLibrary::Functions::Multiply(1.0, 2.0) << std::endl;
	std::cout << "1.0 + (1.0 * 2.0) = " << MathLibrary::Functions::AddMultiply(1.0, 2.0) << std::endl;
    return 0;
}

