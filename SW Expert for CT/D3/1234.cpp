//1234. [S/W 문제해결 기본] 10일차 - 비밀번호
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV14_DEKAJcCFAYD&categoryId=AV14_DEKAJcCFAYD&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	bool flag;
	int N;
	string str, tmp_left, tmp_right;

	for (int t = 1; t <= 10; t++) {
		cin >> N >> str;

		//첫 붙어있는 문자2개 찾기
		for (int i = 1; i < str.size(); i++) {
			if (str[i - 1] == str[i]) {
				tmp_left = str.substr(0, i - 1);
				tmp_right = str.substr(i + 1, str.size() - (i + 1));
				str = tmp_left + tmp_right;
				flag = true;
				break;
			}
		}

		//반복해서 붙어있는 문자 2개 찾기
		//탐색에서 붙어있는 문자 찾지 못하거나 문자열크기가 2개이상 안되면 종료
		while (str.size() > 0 && flag) {
			flag = false;

			//붙어있는 문자2개 찾기
			for (int i = 1; i < str.size(); i++) {
				if (str[i - 1] == str[i]) {
					tmp_left = str.substr(0, i - 1);
					tmp_right = str.substr(i + 1, str.size() - (i + 1));
					str = tmp_left + tmp_right;
					flag = true;
					break;
				}
			}
		}



		//출력
		cout << '#' << t << ' ' << str << '\n';
	}
	return 0;
}