#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0) // +x +y
		cout << "1" << endl;
	else if (x < 0 && y > 0) // -x +y
		cout << "2" << endl;
	else if (x < 0 && y < 0) // -x -y
		cout << "3" << endl;
	else
		cout << "4" << endl; // +x -y

	return 0;
}