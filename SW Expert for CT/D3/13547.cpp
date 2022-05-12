//13547
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AX6PP9G6p1sDFAS9&categoryId=AX6PP9G6p1sDFAS9&categoryType=CODE&problemTitle=13547&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(){
	int T,x_cnt;		//테스트케이스 수, 소정이가 패배한 수
	string str;		//문자열
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> str;
		
		//소정이가 진 횟수 계산
		x_cnt=0;
		for(int i=0; i<str.size(); i++){
			if(str[i]=='x'){ x_cnt++; }
		}
		
		//출력
		cout << '#' << t << ' ';
		if(x_cnt<=7){ cout << "YES" << '\n'; }
		else{ cout << "NO" << '\n'; }
	}

    return 0;
}