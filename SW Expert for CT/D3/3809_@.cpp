//3809. 화섭이의 정수 나열
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWHz7xD6A20DFAVB&categoryId=AWHz7xD6A20DFAVB&categoryType=CODE&problemTitle=3809&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//!참고 벡터 중복되는 요소 삭제
//v.erase(unique(v.begin(), v.end()), v.end());
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T,n,tmp;
	cin >> T;

	for (int t = 1; t <= T; t++){
		vector<string> v;
		bool check = true;
		string s = "";

		cin >> n;
        //숫자배열 입력받아 하나의 문자열로
		for (int i = 0; i < n; i++){
			cin >> tmp;
			s += to_string(tmp);
		}

        //1개씩 자르기, 2개씩자르기, 3개씩자르기.. 반복
		for (int i = 1; i <= s.size(); i++){
            //문자열 하나씩 잘라 벡터에 저장
			for (int j = 0; j < s.size(); j++){
				string tmp = s.substr(j, i);
				v.push_back(tmp);
			}
            //1 자리 수부터 받아오기 때문에
            //pow(10, i-1)-1 ~ pow(10, i) 까지 수가(0에서 자리수로 가능한 최대값)
			for (int j = pow(10, i - 1) - 1; j < pow(10, i); j++){
                //find함수로 v벡터에 있는지 확인
                // ex. if(find(v.begin(), v.end(), 6) != v.end()) { // vector내에 6이 존재함
				//==은 존재하지 않음
                if (find(v.begin(), v.end(), to_string(j)) == v.end()){
					cout << "#" << t << " " << j << endl;
					check = false;
					break;
				}
			}
            //없는 수 찾았으면 해당케이스 종료
			if (!check){ break; }
		}
	}
	return 0;
}