#include <iostream>
using namespace std;


int main()
{
	int s = 0;
	cin >> s;

	if (s > 89)
		cout << "A" << endl;
	else if ((s > 79))
		cout << "B" << endl;
	else if (s > 69)
		cout << "C" << endl;
	else if (s > 59)
		cout << "D" << endl;
	else
		cout << "F" << endl;

	return 0;
}