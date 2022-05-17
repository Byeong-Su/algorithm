//아바바바
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AW4Z8x2KAL8DFAQ7&categoryId=AW4Z8x2KAL8DFAQ7&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=14
//풀이1. 계차수열 문제
//개수가 3개인 회문부터 1개, 4개, 9개, 16개, 25개, 36개... 순인 계차수열, 계차수열하고 그 안의 등차수열 합 구해주면 됨
//1   4   9   16   25   36  ...
//  3   5   7    9    11  ...계차수열에서
//    2   2   2    2     ...등차수열 임을 활용
//등차수열의 합 공식
//1. 첫항과 끝항을 알때 S(n)=n(a+l)/2     a:첫항, l:끝항
//2. 첫항과 공차를 알때 S(n)=n{2a+(n-1)d}/2     a:첫항, d:공차


//풀이2. 점화식으로
//다 답이 제곱수임 1,4,9,25,36...

#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int TC, N; cin >> TC;
	for (int t = 1; t <= TC; t++) {
		cin >> N;
		long long temp = (N - 1) / 2;
		cout << "#" << t << ' ' << temp * temp << '\n';
	}
	return 0;
}

/*
100가지의 경우만 맞는 것
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,L;      //테스트케이스 수, 정수 L
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> L;
        int idx=L/2-1;
        int first=1, a=3, d=2, sum;   //계차수열의 첫 항, 등차수열의 첫항, 공차,합
        
        sum=first + (idx*(2*a+(idx-1)*d)/2);
        //출력
        cout << '#' << t << ' ' << sum << '\n';
    }

    return 0;
}*/