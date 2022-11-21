#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	cin.tie(NULL); cout.tie(NULL);

	int T,max_len;
	string s;
	cin >> T;
	
	for(int t=1; t<=T; t++){
		max_len=0;
		vector<string> v;
		for(int i=0; i<5; i++){
			cin >> s;
			v.push_back(s);
			if(s.size()>max_len){ max_len = s.size(); }
		}	
		cout << '#' << t << ' ';
		for(int i=0; i<max_len; i++){
			for(int j=0; j<5; j++){
				if(i<v[j].size()){ cout << v[j][i]; }
			}
		}
		cout << '\n';
	}

	return 0;
}