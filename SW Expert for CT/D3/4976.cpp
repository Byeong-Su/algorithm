// /4676. 늘어지는 소리 만들기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWRKWITqfvIDFAV8&categoryId=AWRKWITqfvIDFAV8&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=10
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T,h,pos;
    cin >> T;
    for(int t=1; t<=T; t++){
        string s,first="",tmp;
        cin >> s;
        vector<string> v;
        
        for(int i=0; i<s.size(); i++){
            tmp="";
            tmp+=s[i];
            v.push_back(tmp);
        }
        
        cin >> h;
        for(int i=0; i<h; i++){
            cin >> pos;
            if(pos==0){ first+='-'; }
            else{ v[pos-1]+='-'; }
        }
        
        cout << '#' << t << ' ';
        cout << first;
        for(int i=0; i<v.size(); i++){
            cout << v[i];
        }
        cout << '\n';
    }

    return 0;
}