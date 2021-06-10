#include <iostream>
using namespace std;

int main()
{
	int n;
	int hap = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++)
		hap += i;

	cout << hap << endl;

	return 0;
}