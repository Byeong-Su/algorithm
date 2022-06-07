//5607. [Professional] 조합
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXGKdbqczEDFAUo
//그냥 페르마의 소정리만 쓰면 안되고 분할탐색 까지 해줘야 풀림
#include <iostream>
#include <vector>

using namespace std;
long long MOD = 1234567891;
long long fac[1000001] = {1, 1, };

long long fermat(int N, long long mod)
{
    if(mod == 0)
        return 1;
    
    long long tmp = fermat(N, mod / 2);
    long long ans = (tmp * tmp) % MOD;
    
    if(mod % 2 == 0)
        return ans;
    else
        return (N * ans) % MOD;
}

int main(void)
{
    int t;
    cin >> t;
    
    //Factorial 미리 구하기
    for(int i = 2; i <= 1000000; i++)
        fac[i] = (fac[i - 1] * i) % MOD;
    
    for(int i = 1; i <= t; i++)
    {
        int N, R;
        long long ans, a;
        
        cin >> N >> R;
        a = fermat((fac[R] * fac[N - R]) % MOD, MOD - 2);
        ans = (fac[N] * a) % MOD;
        cout << "#" << i << " " << ans << endl;
    }
    return 0;
}

//주석단 다른코드
/*
#include <iostream>

#define MOD 1234567891

using namespace std;

//a:밑, b:지수
long long pow(long long a, long long b) {
	//지수가 0이면 1 리턴
	if (b == 0) { return 1; }
	//지수가 1이면 밑 리턴
	if (b == 1) { return a; }

	//분할정복
	//b가 짝수면 temp를 두번 곱하면 됨
	//예를들어, 2^10을 분할정복하면 2^5 2^5로 나뉘기 때문에 temp*temp가 됨
	if (b % 2 == 0) {
		long long temp = pow(a, b / 2);
		return (temp*temp) % MOD;
	}
	//b가 짝수가 아니면 temp에 밑을 곱한다.
	//예를들어, 2^9일 경우 2^4 2^4 2를 곱해야 함
	long temp = pow(a, b - 1) % MOD;
	return (temp*a) % MOD;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	long long factorial[1000001] = { 0 };

	factorial[0] = 1;
	//미리 팩토리얼 MOD로 나눠 저장해두기
	for (int i = 1; i < 1000001; i++) {factorial[i] = (factorial[i - 1] * i) % MOD;}
	for (int t = 1; t <= T; t++) {
		long long N, R;
		cin >> N >> R;

		long long numerator = factorial[N];
		long long denominator = (factorial[N-R]*factorial[R])%MOD;

		denominator = pow(numerator, MOD - 2);
		cout << '#' << t << ' ' << (numerator* denominator)%MOD << '\n';
	}

	return 0;
}*/