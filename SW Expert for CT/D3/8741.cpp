//8741. 두문자어
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW2y6n3qPXQDFATy&categoryId=AW2y6n3qPXQDFATy&categoryType=CODE&problemTitle=8741&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>
#include <string>

using namespace std;

int main(){
	int T;
	
	cin >> T;
	for(int t=1; t<=T; t++){
		string str,res;
		for(int i=0; i<3; i++){
			cin >> str;
			res+=toupper(str[0]);
		}
		
		cout << '#' << t << ' ' << res << '\n';
	}
	
	return 0;
}