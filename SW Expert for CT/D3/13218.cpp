//13218
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXzjvCCq-PwDFASs&categoryId=AXzjvCCq-PwDFASs&categoryType=CODE&problemTitle=13218&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(){
	int T,N;		//테스트케이스 수, 학생 수
	
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> N;
		
		cout << '#' << t << ' ' << N/3 << '\n';
	}

    return 0;
}