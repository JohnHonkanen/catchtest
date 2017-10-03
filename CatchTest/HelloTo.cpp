#include "HelloTo.h"

HelloTo::HelloTo()
{
}


HelloTo::~HelloTo()
{
}

void HelloTo::SetName(string name)
{
	HelloTo::name = name;
}

string HelloTo::GetName()
{
	return name;
}

string HelloTo::SayHello()
{
	return "Hello " + name;
}