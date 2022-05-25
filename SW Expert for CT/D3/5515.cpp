//5515. 2016년 요일 맞추기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWWOwecaFrIDFAV4&categoryId=AWWOwecaFrIDFAV4&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=7
//day_cnt T 반복마다 초기화 안해주는 실수함...
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T,m,d,day_cnt;
	int arr[13] = { 0,30,29,31,30,31,30,31,31,30,31,30,31 };
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> m >> d;
		day_cnt = 0;
		if (m == 1) { day_cnt = d - 1; }
		else {
			for (int i = 1; i < m; i++) { day_cnt += arr[i]; }
			day_cnt += d;
		}
		
		cout << '#' << t << ' ';
		if (day_cnt % 7 == 0) { cout << 4; }
		else if (day_cnt % 7 == 1) { cout << 5; }
		else if (day_cnt % 7 == 2) { cout << 6; }
		else if (day_cnt % 7 == 3) { cout << 0; }
		else if (day_cnt % 7 == 4) { cout << 1; }
		else if (day_cnt % 7 == 5) { cout << 2; }
		else if (day_cnt % 7 == 6) { cout << 3; }
		cout << '\n';
	}
	return 0;
}