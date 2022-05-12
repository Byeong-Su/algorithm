//[S/W 문제해결 기본] 3일차 - String
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV14P0c6AAUCFAYi&categoryId=AV14P0c6AAUCFAYi&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=3
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, len, cnt;      //검색 문자열 길이, 검색된 개수
    string search, str;
    for(int t=1; t<=10; t++){
        cin >> T;
        //입력
        cin >> search >> str;

        cnt=0;
        len=search.size();

        for(int i=0; i<str.size(); i++){
            if(str[i]==search[0]){
                if(str.substr(i,len)==search){ cnt++; }
            }
        }


        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}