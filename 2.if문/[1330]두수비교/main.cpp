#include <iostream>
using namespace std;

int main(void)
{
	int A = 0;
	int B = 0;
	cin >> A >> B;

	if (A > B)
		cout << ">" << endl;
	else if (A < B)
		cout << "<" << endl;
	else
		cout << "==" << endl;
	// else�� ������ ������ ���α׷� ����� ���X

	return 0;
}