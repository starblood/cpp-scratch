#include <iostream>
#include <string>

using namespace std;

/*
	3-4.  Write a program to report the length of the longest and shortest  string  in its input.

	입력으로 들어온 string 중에서 가장 짧은, 긴 길이를 보고하는 프로그램을 작성하시오.

	Writer: Gyuhang Shim,	Date: 2011/06/07
*/
int main()
{
	string tmp;
	size_t shortest = tmp.max_size(), longest = 0;

	cout << "max_size: " << tmp.max_size() << endl;

	while (cin >> tmp) {
		size_t length = tmp.length();
		if (length > longest) {
			longest = length;
		}
		if (length < shortest) {
			shortest = length;
			cout << "shortest: " << shortest << endl;
		}
	}


	cout << "shortest: " << shortest << endl;
	cout << "longest: " << longest << " shortest: " << shortest << endl;
	return 0;
}
