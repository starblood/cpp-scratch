#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;		using std::sort;
using std::cout;	using std::streamsize;
using std::endl;	using std::string;
using std::setprecision;	using std::vector;

int main()
{
	cout << "Enter numbers: ";
	vector<int> input;
	int x;

	while (cin >> x) {
		input.push_back(x);
	}

	typedef vector<int>::size_type vec_sz;
	vec_sz size = input.size();
	if (size < 1) {
		cout << "Specify more than one integer." << endl;
		return 1;
	}

	sort(input.begin(), input.end());
	cout << "Sorted numbers are:" << endl;
	for (vector<int>::iterator it = input.begin(); it != input.end(); ++it) {
		cout << *it << " ";
	}
	/*
	for	(int i = 0; i < input.size(); i++) {
		cout << input[i] << " ";
	}
	*/
	cout << endl;
	vec_sz mid = size / 2;
	
	double median, l_quatile, u_quatile;
	bool even = false;
	if (size % 2 == 0) {
		even = true;
	}
	median = even ? (input[mid] + input[mid-1]) / 2 : input[mid];
	l_quatile = even ? (input[size/4] + input[size/4-1]) / 2 : input[size / 4];
	u_quatile = even ? (input[(size * 3 / 4)] + input[(size * 3 / 4) - 1]) / 2 : input[(size * 3 / 4)];

	streamsize prec = cout.precision();
	cout << "upper quatile: " << u_quatile << " median: " << setprecision(3) << median << " lower quatile: " << l_quatile << endl;
	return 0;
}
