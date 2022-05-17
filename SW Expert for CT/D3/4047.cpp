//4047. 영준이의 카드 카운팅
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIsY84KEPMDFAWN
//s:space d:diamond h:heart c:clover
#include <iostream>

using namespace std;

int main(){
	
	int T,num;		//테스트케이스 수, 입력한 카드숫자
	char c;			//입력 카드 문양
	bool error;
	
	
	string str;	//입력 문자열
	
	cin >> T;
	for(int t=1; t<=T; t++){
		
		int cntS=0, cntD=0, cntH=0, cntC=0;	//부족한 카드 수
		int S[14]={0}, D[14]={0}, H[14]={0}, C[14]={0};    //카드별 보유여부 배열
		
		cin >> str;
		
		error = false;
		for(int i=0; i<str.size(); i+=3){
			c=str[i];
			num=(str[i+1]-'0')*10 + (str[i+2]-'0');
			switch(c){
				case 'S':
					S[num]++;
					break;
				case 'D':
					D[num]++;
					break;
				case 'H':
					H[num]++;
					break;
				case 'C':
					C[num]++;
					break;
			}
		}
        
		for(int i=1; i<14; i++){
			if( S[i]==2 || D[i]==2 || H[i]==2 || C[i]==2 ){ error=true; break; }
			
			if( S[i]==1 ){ cntS++; }
			if( D[i]==1 ){ cntD++; }
			if( H[i]==1 ){ cntH++; }
			if( C[i]==1 ){ cntC++; }
		}
        
        if(error){  cout << '#' << t << ' ' << "ERROR" << '\n'; }
		else{ cout << '#' << t << ' ' << 13-cntS << ' ' << 13-cntD << ' ' << 13-cntH << ' ' << 13-cntC << '\n'; }
	}
	
	return 0;
}