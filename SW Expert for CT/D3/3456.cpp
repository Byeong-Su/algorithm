//3456. 직사각형 길이 찾기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWFPmsqqALwDFAV0&categoryId=AWFPmsqqALwDFAV0&categoryType=CODE&problemTitle=3456&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(){
	int T;
	int a,b,c;
	
	cin >> T;
	for(int t=1; t<=T; t++){
		cin >> a >> b >> c;
		
		cout << '#' << t << ' ';
		if(a==b){ cout << c; }
		else if(b==c){ cout << a; }
		else{ cout << b; }
		cout << '\n';
	}
	
	return 0;
}