#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> homework;

	homework.push_back(0.4);

	vector<double>::size_type vec_size = homework.size();

	// vector size is 1
	cout << vec_size << endl;

	// even if vector size is 1, the result of deduction is not negative.
	cout << vec_size - 50 << endl;
	return 0;
}
