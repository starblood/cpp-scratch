#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
	3-3.  Write a program to count how many times each distinct word appears in its input.

	Comment: 입력으로 들어온 단어가 몇 개인지, 세는 프로그램.
	책에서는 vector 로 해결하는 것을 의도하는 것 같으나, map 으로 해결하는 것이 훨씬 유연성이
    있다고 판단해서, map 으로 해결하는 프로그램을 작성하였다.
	
	실행방법: command prompt로 단어들을 입력한다음 Ctrl + d 를 눌러서 입력을 종료한다.

	Writer: Gyuhang Shim, 2011/06/07
	STL Reference

	map::find

		iterator find (const key_type& x);
		const_iterator find (const key_type& x) const;

	: Searches the container for an element with x as key and returns an iterator to it if found, 
		otherwise it returns an iterator to map::end (the element past the end of the container).
*/
int main()
{
	map<string, int> dic;
	map<string, int>::iterator it;
	string tmp;

	cout << "Enter words: ";

	while (cin >> tmp) {
		it = dic.find(tmp); // map.find returns iterator
		if (it == dic.end()) {
			dic[tmp] = 1;
		} else {
			(*it).second++;
		}
	}
	
	cout << endl;
	for (it = dic.begin(); it != dic.end(); it++) {
		cout << (*it).first << " => " << (*it).second << endl;
	}

	return 0;
}

