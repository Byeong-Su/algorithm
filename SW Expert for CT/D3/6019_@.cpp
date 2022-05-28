//6019. 기차 사이의 파리
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWajaTmaZw4DFAWM&categoryId=AWajaTmaZw4DFAWM&categoryType=CODE&problemTitle=6019&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//#include <iomanip> 넣고
//cout >> fixed >> setprecision(6)하고 출력하면 소수점 6개까지 나옴
//수학 문제
//1. A와 B가 충돌하는 시간을 구한다.
//(파리는 일정한속도로 비행하기 때문에
//2. A와 B의 충돌시간에 파리의 속력을 곱해 답을 도출

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double  D,A,B, fly, ans, tmp;
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> D >> A >> B >> fly;

		tmp = D / (A + B);
		ans = tmp * fly;
		
		//printf("#%d %f\n", t, ans);
		cout << '#' << t << ' ';
		cout << fixed << setprecision(6);
		cout << ans << '\n';
	}
	return 0;
}


//바보같은 풀이지만 일단 테스트케이스는 맞다
//sw expert에서 원하는 풀이가 아니라 틀렸다고 생각한다..
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double  D,A,B, fly, ans=0, fly_move=10;
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> D >> A >> B >> fly;

		bool idx = true;
		while (fly_move > 0.000001) {
			if (idx) {
                //fly와 B가 만나는데 걸리는 시간 * fly 속도 = fly이동거리
				ans += ((D / (B + fly))*fly);
				D -= ((D / (B + fly))*A + (D / (B + fly))*B);
				fly_move = ((D / (B + fly))*fly);
			}
			else {
				ans += ((D / (A + fly))*fly);
				D -= ((D / (A + fly))*A + (D / (A + fly))*B);
				fly_move = ((D / (A + fly))*fly);
			}
			idx = (!idx);
			//cout << ans << endl;
		}

        //C스타일 출력
		//printf("#%d %f\n", t, ans);
        //C++스타일 출력
		cout << '#' << t << ' ';
		cout << fixed << setprecision(6);
		cout << ans << '\n';
	}
	return 0;
}*/