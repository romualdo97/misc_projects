#define HELLOWORLD_API __declspec(dllexport)

extern "C"
{
	HELLOWORLD_API float sayHello();
}