//7964. 부먹왕국의 차원 관문
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int T,N,D,city,cnt;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		//필요 관문 수 초기화
		cnt = 0;
		//도시 수, 이동 제한 거리 입력
		cin >> N >> D;
		vector<bool> v;
		//도시 입력
		for (int i = 0; i < N; i++) {
			cin >> city;
			if (city) { v.push_back(true); }
			else { v.push_back(false); }
		}
		//필요 관문 수 확인
		int tmp = 0;
		//시작 점 확인
		//시작 점에 관문 있는 경우
		if (v[0]) { tmp = D; }
		else { cnt++; tmp = D; }
		//시작점 다음 위치부터 필요 관문 수 확인
		for (int i = 1; i < v.size(); i++) {
			//관문이 원래 있는 경우 이동제한거리 D로 초기화
			if (v[i]) {
				tmp = D;
			}
			//이동제한거리가 0이고 관문도 없는 경우 필요관문수 +1, 이동제한거리 D로 초기화
			else if (tmp == 1 && !v[i]) {
				cnt++;
				tmp = D;
			}
			//이동제한거리가 남아있고 관문이 없는 경우 현재 이동제한거리 -1
			else{
				tmp--;
			}
		}
		//출력
		cout << '#' << t << ' ' << cnt << '\n';
	}

	return 0;
}