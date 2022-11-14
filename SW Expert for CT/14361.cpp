//sw expert 14361 숫자가 같은 배수
//next_permutation을 이용해 순서에 상관없이 나열하는 순열을 구현

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){
	int N,T;
	bool flag;
    
	cin >> T;
	
	for(int t=1; t<=T; t++){
        flag=false;
        
		cin >> N;
		
		cout << '#' << t << ' ';
		
		//한 자리 숫자이면 위치를 바꾼 다른 숫자를 만들 수 없으므로 impossible
		if(N<10){ cout << "impossible\n"; continue; }
		
		string num = to_string(N);
		vector<string> v;
		//가능한 조합을 v에 삽입
		do{
			v.push_back(num);
		}while(next_permutation(num.begin(),num.end()));
		
		//순열을 저장한 벡터에서 N보다 크고 N의 배수인 숫자 있는지 확인
		for(int i=0; i<v.size(); i++){
			if( (stoi(v[i])>N) && (stoi(v[i])%N==0) ){
				cout << "possible\n"; flag=true; break;
			}
		}
        
        if(!flag){ cout << "impossible\n"; }
		
	}
}