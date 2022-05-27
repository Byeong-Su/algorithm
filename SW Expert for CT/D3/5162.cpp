//5162. 두가지 빵의 딜레마
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWTaTDua3OoDFAVT&categoryId=AWTaTDua3OoDFAVT&categoryType=CODE&problemTitle=5162&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, A, B, C;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> A >> B >> C;
		cout << '#' << t << ' ';
		if (A <= B) {
			cout << C / A;
		}
		else {
			cout << C / B;
		}
		cout << '\n';
	}

	return 0;
}