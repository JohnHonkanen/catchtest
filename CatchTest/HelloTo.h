#pragma once
#include <string>

using namespace std;
class HelloTo
{
public:
	HelloTo();
	~HelloTo();

	void SetName(string name);
	string GetName();
	string SayHello();
private:
	string name;
};