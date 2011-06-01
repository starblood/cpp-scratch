#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::cin;

const int getLarge(const int first, const int second) {
	if (first > second) {
		return first;
	} else {
		return second;
	}
}
int main()
{
	int first, second;
	
	// 사용자가 white space 로 분리된 두개의 정수를 입력한다고 하면, 이 두개의 입력값은
	// 각각 cin 의 buffer 에 쌓이게 된다. 그래서 첫 번째 입력값은 first 에 두 번째 입력값은
	// second 에 할당이 되게 된다.
	cout << "Enter two numbers: ";
	cin >> first >> second;
	
	cout << "Larger number is: " << getLarge(first, second) << endl;

	return 0;
}

