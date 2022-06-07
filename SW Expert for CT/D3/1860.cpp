//1860. 진기의 최고급 붕어빵
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV5LsaaqDzYDFAXc&categoryId=AV5LsaaqDzYDFAXc&categoryType=CODE&problemTitle=1860&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//아래 말 무시하고 배열 범위를 101로 줘서 안풀렸음
//각 정수는 각 사람이 언제 도착하는지를 초 단위로 나타낸다. 각 수는 0이상 11,111이하이다.
#include <iostream>
#include <cstring>

using namespace std;

int baked[11112], customer[11112];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool possible;
	int T,N,M,K,cus,max;
	int tmp_sum;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N >> M >> K;
		memset(customer, 0, sizeof(int) * 11112);
		memset(baked, 0, sizeof(int) * 11112);
		max = 0;
		for (int i = 0; i < N; i++) {
			cin >> cus;
			customer[cus]++;
			if (cus > max) { max = cus; }
		}

		for (int i = 1; i < 11112; i++) {
			if (i%M == 0) { baked[i] = K; }
		}

		tmp_sum = 0;
		possible = true;
		for (int i = 0; i <= max; i++) {
			tmp_sum += baked[i];
			if (customer[i] > 0) { tmp_sum -= customer[i]; }
			if (tmp_sum < 0) { possible = false; break; }
		}
		if (possible) { cout << '#' << t << ' ' << "Possible" << '\n'; }
		else { cout << '#' << t << ' ' << "Impossible" << '\n'; }
	}
	return 0;
}