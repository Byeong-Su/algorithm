#include <iostream>
#include <cstring>

using namespace std;

char arr[4] = { '1','2','3','4' };
bool v[4] = { false };

void DFS(string str, int depth) {
	if (depth == 4) { cout << str << '\n';  return; }

	DFS(str + arr[depth], depth + 1);
	DFS(str, depth + 1);
}

void DFS2(string str, int depth) {
	if (depth == 4) { cout << str << '\n'; return; }

	for (int i = 0; i < 4; i++) {
		if (v[i]) { continue; }
		v[i] = true;
		DFS2(str + arr[i], depth + 1);
		v[i] = false;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << "모두쓰지않고, 골라서 쓸 때\n";
	string s="";
	DFS(s, 0);

	cout << "모두 다 쓰고, 순서를 다르게\n";
	memset(v, false, sizeof(bool) * 4);
    s="";
	DFS2(s, 0);

	


	return 0;
}