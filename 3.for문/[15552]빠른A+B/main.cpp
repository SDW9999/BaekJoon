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
	-> 입력 속도 증가
	-> cin과 cout 묶음을 풀어줌
 * ios_base::sync_with_stdio(false);
	-> 출력 속도 증가
	-> 동기화 비활성화, c 버퍼와 별개로 c++ 독립적인 버퍼 생성
	  => 출력순서 보장X, cin - scanf .. 와 cout - printf .. 병행X
 
 * 위 두 줄 입력 시 endl 대신 개행문자(\n) 사용
	-> endl은 버퍼 초기화 but 느림
*/