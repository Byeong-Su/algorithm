//8888. 시험
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AW45RuSae2gDFAQ7&categoryId=AW45RuSae2gDFAQ7&categoryType=CODE&problemTitle=8888&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//등수 확인시 정렬 필요없이 조건에 따라 카운트만 해주면 됨
//쓸데없이 정렬 하려해서 시간 낭비
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
		int problem[2001] = {0};
		//한 사람이 몇문제 풀었는지 저장 배열
		int howMany[2001] = {0};
		//한 사람이 몇점인지 저장 배열
		int score[2001]={0};
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < T; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == 1) { problem[j]++; howMany[i]++; }
			}
		}

		//각자 점수 합 계산
		for (int i = 0; i < N; i++) {
			int tmp_score = 0, tmp_cnt=0;
			for (int j = 0; j < T; j++) {
				if (arr[i][j] == 1) {
					howMany[i]++;
					score[i]+=(N-problem[i]);
				}
			}
			//p의 점수,카운트 저장
			if (i == P - 1) { P_cnt = howMany[i]; P_score = score[i]; }
		}

		//P의 순위 계산
		int rank=0;
		for(int i=0; i<N; i++){
			if( (i!=P-1) && (score[i]>P_score) ){ rank++; }
			else if( (i!=P-1) && (score[i]==P_score && howMany[i]>P_cnt)){ rank++;}
			else if( (i!=P-1) && (score[i]==P_score && howMany[i]==P_cnt && i<P-1)){ rank++;}
		}

        /*확인용
		for (int i = 0; i < N; i++) {
			cout << v[i].second.second << ':' << v[i].first << ' ' << v[i].second.first << endl;
		}
        */

		/*
		//점수 낮은 순으로 정렬
		sort(v.begin(), v.end());

		//P번째와 같은 점수의 구간 확인
		int start=-1, end=-1, rank;
		for (int i = 0; i < N; i++) {
			if (v[i].first == P_score && start == -1) {
				start = i; end = i; rank = i;
			}
			else if (v[i].first == P_score && start != -1) {
				end = i;
			}
		}
		//P번째보다 더 많은 문제 푼 사람 있는지 확인
		//더 많은 문제 푼사람 있는지 확인 flag
		bool isExist = false;
		for (int i = start; i <=end; i++) {
			if (v[i].second.first > P_cnt) {
				isExist = true;
				rank++;
			}
		}
		//더많은 문제 푼 사람 없는 경우 시험참가 순서 확인
		if (!isExist) {
			for (int i = start; i <= end; i++) {
				if (v[i].second.second < P - 1) {
					rank++;
				}
			}
		}*/

		cout << '#' << test_case << ' ' << P_score << ' ' << rank << '\n';
		
	}

	return 0;
}