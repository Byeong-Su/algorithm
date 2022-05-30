//조합코드
//0,1,2,3,4의 수 중 3가지 조합 다 출력(중복 x)
#include <iostream>

using namespace std;

int arr[5];
bool visited[5];

void dfs(int idx, int depth) {
	//출력
	if (depth == 3) {
		for (int i = 0; i < 5; i++) {
			if (visited[i]) { cout << arr[i] << ' '; }
		}
		cout << '\n';
	}

	for (int i = idx; i < 5; i++) {
		if (visited[i]) { continue; }
		visited[i] = true;
		dfs(i, depth + 1);
		visited[i] = false;
	}
}
int main() {
	for (int i = 0; i < 5; i++) {
		arr[i] = i;
	}

	dfs(0, 0);

	return 0;
}