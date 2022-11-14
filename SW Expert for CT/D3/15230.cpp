//sw expert 15230 알파벳 공부
#include <iostream>
#include <string>

using namespace std;

int main(){
	int T, cnt;
	char c = 'a';
	string s;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		cnt=0;
		//테스트케이스 입력
		cin >> s;
		for(int i=0; i<s.size(); i++){
			//알파벳 순서대로 아닌 문자 나온 경우 카운터 증가시키지 않고 종료
			if( (s[i]-c)!=i ){ break; }
			cnt++;
		}
		cout << '#' << t << ' ' << cnt << '\n';
	}
	
	return 0;
}