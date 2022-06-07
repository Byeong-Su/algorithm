//1949. [모의 SW 역량테스트] 등산로 조성
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PoOKKAPIDFAUq&categoryId=AV5PoOKKAPIDFAUq&categoryType=CODE&problemTitle=1949&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
//모든 지점을 0~k만큼 깍아보고 가장 높은 지점에서 시작하여 dfs로 가장 긴 등산로 찾음
#include<iostream>
#include<vector>

using namespace std;

int n, K, tc, max_length, max_height;

int map[8][8];

bool visited[8][8];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
struct Point{
	int y, x;
};

vector<Point> vt;

void set_map_false(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			visited[i][j] = false;
		}
	}
}

//배열 범위 안넘는지 검사
bool InRange(int y, int x){
	return 0 <= x && x < n && 0 <= y && y < n;
}

void dfs(int y, int x, int length){
	if (length > max_length)
		max_length = length;

	for (int i = 0; i < 4; i++){
		int yy = y + dy[i];
		int xx = x + dx[i];

		//범위 넘지않고 방문안한 요소면
		if (InRange(yy, xx) && !visited[yy][xx]){
			if (map[y][x] > map[yy][xx]){
				visited[yy][xx] = true;
				//dfs
				dfs(yy, xx, length + 1);
				visited[yy][xx] = false;
			}
		}
	}
}

int main(void){
	cin >> tc;

	for (int t = 1; t <= tc; t++){
		cin >> n >> K;

		max_length = 0;
		max_height = 0;
		vt.clear();

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> map[i][j];
				if (map[i][j] > max_height)
					max_height = map[i][j];
			}
		}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (max_height == map[i][j])
					vt.push_back({ i,j });
			}
		}

		for (int k = 0; k <= K; k++){
			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					map[i][j] -= K;

					for (int p = 0; p < vt.size(); p++){
						set_map_false();
						visited[vt[p].y][vt[p].x] = true;
						dfs(vt[p].y, vt[p].x, 1);
					}
					map[i][j] += K;
				}
			}
		}
		cout << '#' << t << ' ' << max_length << '\n';
	}
}