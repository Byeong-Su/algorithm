//5215. 햄버거 다이어트
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWT-lPB6dHUDFAVT#none
#include <iostream>
#include <algorithm>

using namespace std;

int N, L;

int ans;
int score[20], cal[20];

void dfs(int cnt, int score_sum, int cal_sum) {
	//더한 칼로리량이 제한 칼로리보다 클때
	if (cal_sum > L) { return; }

	//N개의 재료까지 뽑았을 경우
	//최대점수와 비교
	if (cnt == N) {
		ans = max(ans, score_sum);
		return;
	}

	//재귀호출 (재료수+1, 칼로리 합)
	dfs(cnt + 1, score_sum + score[cnt], cal_sum + cal[cnt]);

	//재료 제거
	dfs(cnt + 1, score_sum, cal_sum);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		//입력
		cin >> N >> L;

		ans = 0;

		for (int i = 0; i < N; i++) {
			cin >> score[i] >> cal[i];
		}

		dfs(0, 0, 0);
		

		cout << '#' << t << ' ' << ans << '\n';
	}
	return 0;
}