//3499. 퍼펙트 셔플
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWGsRbk6AQIDFAVW&categoryId=AWGsRbk6AQIDFAVW&categoryType=CODE&problemTitle=3499&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//입력을 홀짝 나눠서 큐에 집어넣어버리는게 더 간단
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		string arr[1001];
		for (int i = 0; i < N; i++) { cin >> arr[i]; }

		cout << '#' << t;
		if (N % 2 == 0) {
			for (int i = 0; i < N / 2; i++) {
				cout << ' ' << arr[i];
				cout << ' ' << arr[N / 2 + i];
			}
		}
		else {
			for (int i = 0; i < N / 2; i++) {
				cout << ' ' << arr[i];
				cout << ' ' << arr[N / 2 + 1 + i];
			}
            cout <<' ' << arr[N/2];
		}
		cout << '\n';
	}

	return 0;
}