//1220. [S/W 문제해결 기본] 5일차 - Magnetic
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14hwZqABsCFAYD&categoryId=AV14hwZqABsCFAYD&categoryType=CODE&problemTitle=1220&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1//자성체 제거 필요없이 교착상태만 확인해주면 됨
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;

	for (int t = 1; t <= 10; t++) {
		//입력 및 초기화
		cin >> N;
		int board[N][N];
		bool downExist;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
			    cin >> board[i][j];
			}
		}

		//자성체 제거
		//B제거(위에서부터 1없이 2만 만나는 경우 다 제거)
		/*for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				if (board[j][i] == 1) { break;}
				if (board[j][i] == 2) { board[j][i] = 0; }
			}
		}
		//A제거(밑에서부터 2없이 1만 만나는 경우 다 제거)
		for (int i = 0; i < 100; i++) {
			for (int j = 99; j >= 0; j--) {
				if (board[j][i] == 2) { break; }
				if (board[j][i] == 1) { board[j][i] = 0; }
			}
		}*/

		//교착상태 갯수 확인
		int cnt=0;
		//위에서부터 확인하므로 N극에 해당하는 1만나는지부터 체크
		for (int i = 0; i < N; i++) {
			downExist = false;
			for (int j = 0; j < N; j++) {
				//내려가는것이 있으면 true
			    if (!downExist && board[j][i] == 1) {downExist=true;}
                //내려가는것 만난 상태에서 올라가는것 만나면
				if (downExist && board[j][i] == 2) { cnt++; downExist = false; }
			}
		}
		
		cout << '#' << t << ' ' << cnt <<'\n';
	}
	return 0;
}