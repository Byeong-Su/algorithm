//6692. 다솔이의 월급 상자
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWdXofhKFkADFAWn&categoryId=AWdXofhKFkADFAWn&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=5
//문제는 쉬움, 소수점 출력 문제때문에 계속 틀림
//precision(n)하면 0일경우 출력안되고
//아래처럼 c 스타일로 출력해야 0일경우도 출력되 정답처리됨
#include <iostream>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	double p, x;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;

		double ans = 0;
		for (int i = 0; i < N; i++) {
			cin >> p >> x;
			ans += (p*x);
		}
		
		printf("#%d %f\n", t, ans);
	}

	return 0;
}