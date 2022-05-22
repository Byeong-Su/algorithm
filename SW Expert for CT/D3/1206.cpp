//[S/W 문제해결 기본] 1일차 - View
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, min, res;

	for (int t = 1; t <= 10; t++) {
		//입력
		cin >> N;
		int arr[N];
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}

		//탐색
		res = 0;
		for (int i = 0; i < N; i++) {
			if (i == 0) {
				min = 300;
				//조망권 확보되었는지 확인
				if (arr[i] - arr[i + 1] > 0 && arr[i] - arr[i + 2] > 0) {
					if (arr[i] - arr[i + 1] < min) {
						min = arr[i] - arr[i + 1];
					}
					if (arr[i] - arr[i + 2] < min) {
						min = arr[i] - arr[i + 2];
					}
				}
				//최소값이 삽입되었다면
				if (min != 300) { res += min; }
			}
			else if (i == 1) {
				min = 300;
				if (arr[i] - arr[i + 1] > 0 && arr[i] - arr[i + 2] > 0 && arr[i] - arr[i - 1] > 0) {
					if (arr[i] - arr[i + 1] < min) {
						min = arr[i] - arr[i + 1];
					}
					if (arr[i] - arr[i + 2] < min) {
						min = arr[i] - arr[i + 2];
					}
					if (arr[i] - arr[i - 1] < min) {
						min = arr[i] - arr[i + 2];
					}
				}
				if (min != 300) { res += min; }
			}
			else if (i == N - 2) {
				min = 300;
				if (arr[i] - arr[i + 1] > 0 && arr[i] - arr[i - 2] > 0 && arr[i] - arr[i - 1] > 0) {
					if (arr[i] - arr[i + 1] < min) {
						min = arr[i] - arr[i + 1];
					}
					if (arr[i] - arr[i - 2] < min) {
						min = arr[i] - arr[i + 2];
					}
					if (arr[i] - arr[i - 1] < min) {
						min = arr[i] - arr[i + 2];
					}
				}
				if (min != 300) { res += min; }
			}
			else if (i == N - 1) {
				min = 300;
				if (arr[i] - arr[i - 2] > 0 && arr[i] - arr[i - 1] > 0) {

					if (arr[i] - arr[i - 2] < min) {
						min = arr[i] - arr[i + 2];
					}
					if (arr[i] - arr[i - 1] < min) {
						min = arr[i] - arr[i + 2];
					}
				}
				if (min != 300) { res += min; }
			}
			else if ((i - 2 > -1 && i + 2 < N) && (arr[i - 2] < arr[i] && arr[i - 1] < arr[i] && arr[i + 1] < arr[i] && arr[i + 2] < arr[i])) {
				min = 300;
				for (int j = -2; j <= 2; j++) {
					if (j == 0) { continue; }
					if ((arr[i] - arr[i + j] > 0) && (arr[i] - arr[i + j] < min)) {
						min = arr[i] - arr[i + j];
					}
				}
				if (min != 300) { res += min; }
			}
		}

		cout << '#' << t << ' ' << res << '\n';
	}

	return 0;
}