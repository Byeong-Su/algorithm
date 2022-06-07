//3142. 영준이와 신비한 뿔의 숲
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV_6xWk6sbADFAWS&categoryId=AV_6xWk6sbADFAWS&categoryType=CODE&problemTitle=3142&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//연립방정식 계산방식을 그대로 사용
#include <iostream>

using namespace std;

int main() {

	int T,N,M;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N >> M;

		cout << '#' << t << ' ' << M - (N - M) << ' ' << N - M << '\n';
	}

	return 0;
}