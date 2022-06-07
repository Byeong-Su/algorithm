//8821. 적고 지우기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW37UDPKCgQDFATy&categoryId=AW37UDPKCgQDFATy&categoryType=CODE&problemTitle=8821&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main(){
	int T,num;
	
	cin >> T;
	for(int t=1; t<=T; t++){
		int cnt=0;
		string str;
		cin >> str;
		bool arr[10]={false};
		
		for(int i=0; i<str.size(); i++){
			num=str[i]-'0';
			arr[num]=!arr[num];
		}
		for(int i=0; i<10; i++){
			if(arr[i]){ cnt++; }
		}
		
		cout << '#' << t << ' ' << cnt << '\n';
	}
	
	return 0;
}