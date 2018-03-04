// MathLibrary.h - Contains declaration of Function class  
#pragma once  

/*
By default, the New Project template for a
DLL adds PROJECTNAME_EXPORTS to the defined
preprocessor symbols for the DLL project.
In this example, MathLibrary_EXPORTS is defined
when your MathLibrary DLL project is built.

this is because compilation command is:
cl /EHsc /DMathLibrary_EXPORTS /LD MathLibrary.cpp

	- /EHsc compiler option enables C++ exception handling
	- /D compiler option defines your project's MathLibrary_EXPORTS preprocessor symbol
	- /LD compiler option specifies to compiler that the output file will be a DLL
*/

#ifdef MathLibrary_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  

/*
When the MathLibrary_EXPORTS symbol is defined,
the MATHLIBRARY_API symbol sets the __declspec(dllexport)
modifier on the member function declarations in this code.

This modifier tells the compiler and linker to export
the function or variable from the DLL so that it can
be used by other applications.

When MathLibrary_EXPORTS is undefined—for example,
when the header file is included by a client
application—MATHLIBRARY_API defines the __declspec(dllimport)
modifier on the member function declarations.

This modifier optimizes the import of the function
in an application. For more information, see dllexport, dllimport.
*/

namespace MathLibrary
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:
		// Returns a + b  
		static MATHLIBRARY_API double Add(double a, double b);

		// Returns a * b  
		static MATHLIBRARY_API double Multiply(double a, double b);

		// Returns a + (a * b)  
		static MATHLIBRARY_API double AddMultiply(double a, double b);
	};
}