//14555. 공과 잡초

#include <iostream>
#include <string>

using namespace std;

int main(){
	int T,cnt;
	string grass;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		//초원 입력
		cin >> grass;
		//가능한 공의 개수 초기화
		cnt=0;
        
        //왼쪽부터 탐색
        for(int i=0; i<grass.size()-1; i++){
            if(grass[i]=='('){ grass[i+1]=')'; }
        }
        //오른쪽부터 탐색
        for(int i=grass.size()-1; i>0; i--){
            if(grass[i]==')'){ grass[i-1]='('; }
        }            
        
        //개수 카운트
        for(int i=0; i<grass.size()-1; i++){
            if(grass[i]=='(' && grass[i+1]==')'){ cnt++; i++; }
        }
        
		cout << '#' << t << ' ' << cnt << '\n';
	}
	
	return 0;
}