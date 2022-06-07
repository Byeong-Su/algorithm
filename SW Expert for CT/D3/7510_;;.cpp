//7510. 상원이의 연속 합
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWoEzJFa2A4DFARq&categoryId=AWoEzJFa2A4DFARq&categoryType=CODE&problemTitle=7510&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//연속수의 합이므로 backtracking 아니라 그냥 반복문 쓰면 된다
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,n, ans, tmp;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> n;
		ans = 0;
		for (int i = 1; i <= n; i++) {
			tmp = 0;
			for (int j = i; j <= n; j++) {
				tmp += j;
				if (tmp == n) { ans++; }
				else if (tmp > n) { break; }
			}
		}
		cout << '#' << t << ' ' << ans << '\n';
	}

	return 0;
}