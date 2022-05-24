//5789. 현주의 상자 바꾸기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWYygN36Qn8DFAVm&categoryId=AWYygN36Qn8DFAVm&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=5
#include <iostream>
#include <cstring>

using namespace std;

int number[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		//입력 및 초기화
		int N, Q, L, R;
		cin >> N >> Q;		
		memset(number, 0, sizeof(int) * 1001);

		//자리에 숫자 넣기
		for (int i = 1; i <= Q; i++) {
			cin >> L >> R;
			for (int j = L; j <= R; j++) {
				number[j] = i;
			}
		}

		//출력
		cout << '#' << t;
		for (int i = 1; i <= N; i++) { cout << ' ' << number[i]; }
		cout << '\n';
	}
	return 0;
}