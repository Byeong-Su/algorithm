//8888. 시험
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AW45RuSae2gDFAQ7&categoryId=AW45RuSae2gDFAQ7&categoryType=CODE&problemTitle=8888&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//등수 확인시 정렬 필요없이 조건에 따라 카운트만 해주면 됨
//쓸데없이 정렬 하려해서 시간 낭비
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n, t, p;
int info[2001][2001];
pair<pair<int, int>, int> person[2001];

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
	if(a.first.first == b.first.first){
		if(a.first.second == b.first.second){
			return a.second < b.second;
		}
		return a.first.second > b.first.second;
	}
	return a.first.first > b.first.first;
}

int main(){
	cin.tie(0);
	cout.sync_with_stdio(false);

	int T;
	cin>>T;
	for(int test_case = 1; test_case <= T; ++test_case){
		memset(info, 0, sizeof(info));
		memset(person, 0, sizeof(person));
		int ans = 0;
		cin >> n >> t >> p;


		for(int i=1; i<=n; i++){
			for(int j=1; j<=t; j++){
				cin >> info[i][j];
				if(info[i][j] == 1){
					info[i][0]++;
				}
				else{
					info[0][j]++;
				}
			}
		}
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=t; j++){
				if(info[i][j] == 1){
					person[i].first.first += info[0][j];
				}
			}
			person[i].first.second = info[i][0];
			person[i].second = i;
		}
        
		sort(person+1, person+n+1, cmp);

		for(int i=1; i<=n; i++){
			if(person[i].second == p){
				cout << "#" << test_case << " " << person[i].first.first << " " << i << "\n";
				break;
			}
		}

		
	}
	return 0;
}



//정렬안하고 푸는 방법(동작이 안됨)
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case, N, T, P, P_score, P_cnt;
	int arr[2001][2001];
	cin >> test_case;
	for (int t = 1; t <= test_case; t++) {
		cin >> N >> T >> P;

		//문제별 몇명 풀었는지 확인 위한 배열
		int problem[2001] = { 0 };
		//한 사람이 몇문제 풀었는지 저장 배열
		int howMany[2001] = { 0 };
		//한 사람이 몇점인지 저장 배열
		int score[2001] = { 0 };
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < T; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == 1) { problem[j]++; howMany[i]++; }
			}
		}

		//각자 점수 합 계산
		for (int i = 0; i < N; i++) {
			int tmp_score = 0, tmp_cnt = 0;
			for (int j = 0; j < T; j++) {
				if (arr[i][j] == 1) {
					howMany[i]++;
					score[i] += (N - problem[i]);
				}
			}
			//p의 점수,카운트 저장
			if (i == P - 1) { P_cnt = howMany[i]; P_score = score[i]; }
		}
		
		for (int i = 0; i < N; i++) { cout << howMany[i] << ' '; }
		cout << endl;
		for(int i=0; i<T; i++){ cout << problem[i] << ' ';}
		cout << endl;

		//P의 순위 계산
		int rank = 0;
		for (int i = 0; i < N; i++) {
			if ((i != P - 1) && (score[i] > P_score)) { rank++; }
			else if ((i != P - 1) && (score[i] == P_score && howMany[i] > P_cnt)) { rank++; }
			else if ((i != P - 1) && (score[i] == P_score && howMany[i] == P_cnt && i < P - 1)) { rank++; }
		}

		cout << '#' << test_case << ' ' << P_score << ' ' << rank << '\n';

	}

	return 0;
}
*/