//9480. 민정이와 광직이의 알파벳 공부
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXAdrmW61ssDFAXq&categoryId=AXAdrmW61ssDFAXq&categoryType=CODE&problemTitle=9480&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include<iostream>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

int alphabet[26];
vector<string> word;
int n, ans;

void dfs(int idx){
    if(idx==word.size()){ return; }

    for(int i=idx; i<word.size(); i++){
        //단어에 존재하는 알파벳 삽입
        for(int j=0; j<word[i].size(); j++){
            alphabet[word[i][j]-'a']++;
        }
        //모든 알파벳 존재하는지 확인
        bool isExist=true;
        for(int j=0; j<26; j++){
            if(alphabet[j]<1){ isExist=false; }
        }
        if(isExist){ ans++; }
        //dfs
        dfs(i+1);
        //단어에 존재한 알파벳 삭제
        for(int j=0; j<word[i].size(); j++){
            alphabet[word[i][j]-'a']--;
        }
    }
}

int main(){
    int T;
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력 및 초기화
        ans=0;
        memset(alphabet, 0, sizeof(alphabet));
        word.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            word.push_back(s);
        }

        //탐색
        dfs(0);

        cout << '#' << t << ' ' << ans << '\n';
    }
}