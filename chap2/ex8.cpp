#include <iostream>

int main()
{
	int sum = 0;

	for (int i = 1; i < 10; i++) {
		std::cout << sum << " + ";
		sum += i;
		std::cout << i << " = " << sum << std::endl;
	}
	
	std::cout << "sum: " << sum << std::endl;
	return 0;
}

