//3307. 최장 증가 부분 수열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWBOKg-a6l0DFAWr&categoryId=AWBOKg-a6l0DFAWr&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=4
//동적계획법 문제
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int num[1001];
int DP[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		//num은 수열값, DP는 LIS
		memset(num, 0, sizeof(int) * 1001);
		memset(DP, 0, sizeof(int) * 1001);
				
		//수열 값 입력
		int N;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}

		//1. i는 i-1까지 자신보다 작은 수 찾는다.
		//2. 그 중에서 가장 큰  LIS 값이 저장되어 있는 인덱스 X를 찾는다.
		//3. LIS[X]를 1 증가시켜 LIS[i] 에 저장한다.
		int ans = 0;
		for (int i = 0; i < N; i++) {
			DP[i] = 1;
			for (int j = 0; j < i; j++) {
				if (num[j] < num[i] && DP[i] < DP[j] + 1) {
					DP[i] = DP[j] + 1;
				}
			}
			ans = max(ans, DP[i]);
		}
		cout << '#' << t << ' ' << ans << '\n';
	}

	return 0;
}



//dfs로풀면 답은 나오나 시간초과 됨
/*
#include <iostream>

using namespace std;

int arr[1001], max_value;

void back_tracking(int idx, int pre, int len, int N) {
	if (idx > N) { return; }	

	if (len > max_value) { max_value = len; }

	//선택안하고 넘어가는 경우
	back_tracking(idx + 1, pre, len, N);

	//선택하고 넘어가는 경우
	if (pre <= arr[idx]) {
		len += 1;
		back_tracking(idx + 1, arr[idx], len, N);
	}

	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		for (int i = 0; i < N; i++) { cin >> arr[i]; }

		max_value = 0;
		//처음것 선택 안하는 경우
		back_tracking(1, 0, 0, N);
		//처음것 선택 하는 경우
		back_tracking(1, arr[0], 1, N);

		cout << '#' << t << ' ' << max_value << '\n';
	}

	return 0;
}*/