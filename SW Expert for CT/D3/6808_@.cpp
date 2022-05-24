//6808. 규영이와 인영이의 카드게임
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWgv9va6HnkDFAW0&categoryId=AWgv9va6HnkDFAW0&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=4
//c++ algorithm라이브러리에 next_permutation라는 조합을 만들어주는 것 있지만 느림
//dfs문제
#include <iostream>
#include <vector>

using namespace std;

vector<int> m, y;
int win=0, lose=0;

void dfs(bool* picked, int turn, int mScore, int yScore){
	//1~18까지의 합 나누기 2는 85.5이다.
	//한쪽이 85이상이면 더 해도 이미 이긴것이므로
	//만약 7번만 했는데 한쪽이 85이상이면 그 이외의 경우를 계산안하고 합산 처리
	if(mScore>85 || yScore>85){
		int remain=1;

		for(int i=9-turn; i>0; i--){ remain*=i; }

		if(mScore < yScore){ lose += remain; }
		else if(mScore > yScore){ win += remain; }
		
		return;
	}

	//0~9까지 순차적으로 선택하였는지 확인
	//선택 안한 순번 만나면 규영이와 인영이의 매칭되는 패 점수를 합산하고(승리자가 두카드의 합을 득점하기 때문)
	//선택처리한 후
	//매칭되는 각자의 패 중 인영이것이 크면 인영이의 점수합산에 더하고 dfs
	//					   규영이가 크면 규영이에 합산하고 dfs
	//true처리하고 넘어가버리면 모든 경우의수 다 탐색 못하므로 false 처리
	for(int i=0; i<9; i++){
		if(!picked[i]){
			int score=m[turn]+y[i];
			picked[i]=true;
			if(m[turn]<y[i]){
				dfs(picked,turn+1,mScore,yScore+score);
			}
			else{
				dfs(picked,turn+1,mScore+score,yScore);
			}
			picked[i]=false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	

	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		bool check[19]={0}, picked[9]={0};
		win=0; lose=0;
		m.clear();
		y.clear();

		//규영이 카드 넣기
		for(int i=0; i<9; i++){
			int tmp;
			cin >> tmp;
			m.push_back(tmp);
			check[tmp]=true;
		}
		//인영이 카드 넣기
		for(int i=1; i<19; i++){
			if(!check[i]){ y.push_back(i); }
		}

		dfs(picked,0,0,0);
		cout << '#' << t << ' ' << win << ' ' << lose << '\n';
		
	}
	return 0;
}