#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, t;
	cin >> t;

	for (int i = 1; i < t + 1; i++)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}

/* cin.tie(NULL);
	-> �Է� �ӵ� ����
	-> cin�� cout ������ Ǯ����
 * ios_base::sync_with_stdio(false);
	-> ��� �ӵ� ����
	-> ����ȭ ��Ȱ��ȭ, c ���ۿ� ������ c++ �������� ���� ����
	  => ��¼��� ����X, cin - scanf .. �� cout - printf .. ����X
 
 * �� �� �� �Է� �� endl ��� ���๮��(\n) ���
	-> endl�� ���� �ʱ�ȭ but ����
*/