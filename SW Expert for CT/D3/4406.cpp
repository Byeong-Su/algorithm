//모음이 보이지 않는 사람
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWNcD_66pUEDFAV8
#include <iostream>

using namespace std;

int main(){
	int T;		//테스트케이스 수
	string str;
	
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> str;
		
		//출력
		cout << '#' << t << ' ';
		for(int i=0; i<str.size(); i++){
			if((str[i]!='a')&&(str[i]!='e')&&(str[i]!='i')&&(str[i]!='o')&&(str[i]!='u')){
				cout << str[i];
			}
		} 
		cout << '\n';
	}

    return 0;
}
