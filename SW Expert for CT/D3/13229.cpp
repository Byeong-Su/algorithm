//sw expert 13229 일요일

#include <iostream>
#include <string>

using namespace std;

int main(){
	int T;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		string s;
		cin >> s;
		
		cout << '#' << t << ' ';
		if(s.compare("SUN")==0){ cout << "7\n"; }
		else if(s.compare("MON")==0){ cout << "6\n"; }
		else if(s.compare("TUE")==0){ cout << "5\n"; }
		else if(s.compare("WED")==0){ cout << "4\n"; }
		else if(s.compare("THU")==0){ cout << "3\n"; }
		else if(s.compare("FRI")==0){ cout << "2\n"; }
		else{ cout << "1\n"; }
	}

	return 0;
}