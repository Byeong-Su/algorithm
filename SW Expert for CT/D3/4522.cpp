//4522. 세상의 모든 팰린드롬
#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
    string s;
    
	for(int t = 1; t <= T; t++){
        cin >> s;
        //일치여부 확인 플래그
        bool flag=true;
        cout << "#" << t << ' ';
        //양끝부터 시작해 일치하는지 확인
        for(int i=0; i<s.size()/2; i++){
            //일치하지 않은것이 발견되면 Not exist 출력하고 종료
            if( (s[i] != s[s.size()-i-1]) && s[i]!='?' && s[s.size()-i-1]!='?' ){
                flag=false;
                cout << "Not exist\n";
                break;
            }
        }
        //모두다 일치하면 Exist 출력
        if(flag){ cout << "Exist\n"; }
	}
    
	return 0;
}