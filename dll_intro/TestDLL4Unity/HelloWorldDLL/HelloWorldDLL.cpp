#include "HelloWorldDLL.h"

extern "C"
{
	float sayHello()
	{
		return 21.0f;
	}
}