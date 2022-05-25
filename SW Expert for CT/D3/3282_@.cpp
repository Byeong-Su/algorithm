//3282. 0/1 Knapsack
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWBJAVpqrzQDFAWr&categoryId=AWBJAVpqrzQDFAWr&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=7
//https://chanhuiseok.github.io/posts/improve-6/
//동적계획법 문제
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N, K;
int V[101], C[101], dp[101][100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int tmp_V, tmp_C;
		//입력 및 초기화
		cin >> N >> K;
		//V[I]:부피, C[i]:가치
		for (int i = 1; i <= N; i++) { cin >> V[i] >> C[i]; }

		for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			if (j - V[i] >= 0) { // i번째 물건을 넣을 수 있다면?
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - V[i]] + C[i]);
				// 넣지 않을 때와 넣었을 때, 둘 중 더 큰 것으로 초기화
			}
			else { // i번째 물건을 넣을 수 없다면, 배낭 용량은 같고 넣지 않았을 때의 값으로 초기화
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
        /*
		cout << "계산 결과 배열 출력" << endl;
		for (int i = 0; i < N; i++) {
			cout << V[i] << ' ' << C[i] << endl;
		}
        */
		cout << '#' << t << ' ' << dp[N][K] << '\n';

	}
	
	return 0;
}

/*
#include <iostream>

using namespace std;

int N, K;
int V[101], C[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int tmp_V, tmp_C;
		//입력 및 초기화
		cin >> N >> K;
		//V[I]:부피, C[i]:가치
		for (int i = 0; i < N; i++) { cin >> V[i] >> C[i]; }

		int ans = 0;
		for (int i = 0; i < N; i++) {
			tmp_V = 0; tmp_C = 0;
			for (int j = i; j >=0; j--) {
				if (j == i) {
					if (V[j] <= K && C[j] > ans) {
						ans = C[j];
					}
					tmp_V = V[j];
					tmp_C = C[j];
				}
				else {
					if ((V[j] + V[i] <= K) && (C[j] + C[i] > ans) && (tmp_C<C[j]+C[i]) ) {
						ans = C[j] + C[i];
						tmp_V = V[j] + V[i];
						tmp_C = C[j] + C[i];
					}
				}
			}
			V[i] = tmp_V;
			C[i] = tmp_C;
		}

		cout << "계산 결과 배열 출력" << endl;
		for (int i = 0; i < N; i++) {
			cout << V[i] << ' ' << C[i] << endl;
		}

		cout << '#' << t << ' ' << ans << '\n';

	}
	
	return 0;
}*/