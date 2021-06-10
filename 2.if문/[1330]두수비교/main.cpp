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
	// else로 닫히지 않으면 프로그램 제대로 출력X

	return 0;
}