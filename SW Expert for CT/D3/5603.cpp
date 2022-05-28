//5603. [Professional] 건초더미
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWXGEbd6cjMDFAUo&categoryId=AWXGEbd6cjMDFAUo&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int n, sum = 0, avg, cnt = 0;
		int arr[10001];
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		avg = sum / n;

		for (int i = 0; i < n; i++) {
			if (arr[i] < avg) { cnt += (avg - arr[i]); }
		}

		cout << '#' << t << ' ' << cnt << '\n';
	}

	return 0;
}