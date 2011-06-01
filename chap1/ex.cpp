#include <iostream>
#include <string>

int main()
{
	// ex1
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";

	std::cout << message << std::endl;

	// ex2
	const std::string exclam = "!";
	// illegal expression
	// const std::string message2 = "Hello" + ", world" + exclam;
	const std::string message2 = "Hello, world" + exclam;

	std::cout << message2 << std::endl;
	return 0;
}

