//준환이의 운동관리
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWE_ZXcqAAMDFAV2
#include <iostream>

using namespace std;

int main(){
	int T;		//테스트케이스 수
	int L,U,X;	//적정 운동범위 L,U, 실제 운동시간 X
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> L >> U >> X;
		
		//출력
		cout << '#' << t << ' ';
		//적정 운동 범위
		if( L<=X && X<=U ){
			cout << 0 << '\n';
		}
		//적게 운동
		else if(X<L){
			cout << L-X << '\n';
		}
		//많이 운동
		else{
			cout << -1 << '\n';
		}
	}

    return 0;
}
