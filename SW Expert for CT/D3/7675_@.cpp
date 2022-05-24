//7675. 통역사 성경이
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWqPvqoqSLQDFAT_&categoryId=AWqPvqoqSLQDFAT_&categoryType=CODE&problemTitle=7675&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//string s;
//cin >> s;
//위 형식 오류뜨면
//#include <string> 넣어주면 됨
//
//a:97 z:122 A:65 Z:90

#include<iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
 
vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int t=1; t<=T; t++){
        int N;
        cin >> N;
        string str;
        cin >> str;
        
        cout << str << endl;
     /*
        vector<string> result = split(str, ' ');
     
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << "\n";
        }*/
    }
}

//string s;
//cin >> s;
//위 형식 오류뜨면
//#include <string> 넣어주면 됨
//
//a:97 z:122 A:65 Z:90


#include <iostream>
#include <string>
#include <vector>

using namespace std;

//int cnt[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	bool isUpper,word;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;
		string s;
		cin >> s;

		vector<int> cnt;
		//문자열 탐색용 index
		int idx = 0;
		isUpper = false;
		word = false;
		while (idx+1 != s.size()) {
			int tmp = 0;
			while (s[idx] != '.' || s[idx] != '?' || s[idx] != '!') {
				if (!word && !isUpper && 65 <= int(s[idx]) && int(s[idx]) <= 122) { isUpper = true; word = true; }
				if (isUpper && 65 <= int(s[idx]) && int(s[idx]) <= 122) { isUpper = false; }

				if (s[idx] == ' ' && isUpper && word) { tmp += 1; isUpper = false; word = false; }


			idx++;
			}
			cnt.push_back(tmp);
		}
		for (int i = 0; i < N; i++) {
			//문자열 탐색용 index
			int idx = 0;
			cnt[i] = 0;
			isUpper = false;
			while (idx!=s.size() || s[idx]==' ') {
				if (!isUpper && 65 <= int(s[idx]) && int(s[idx]) <= 122) { isUpper = true; }
				else if(isUpper && 65 <= int(s[idx]) && int(s[idx]) <= 122)
				idx++;
				
			}
			
		}


	}

	return 0;
}