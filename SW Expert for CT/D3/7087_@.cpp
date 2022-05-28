//7087. 문제 제목 붙이기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWkIdD46A5EDFAXC&categoryId=AWkIdD46A5EDFAXC&categoryType=CODE&problemTitle=&orderBy=INQUERY_COUNT&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
//알파벳의 존재유무를 확인한다음 A부터 하나씩 연속해서 있는지 검사하면 간단
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T,n;
    string s;
    cin >> T;
    for(int t=1; t<=T; t++){
        bool isExist[26]={false};
        
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> s;
           	isExist[s[0]-'A']=true;
        }
        
        int cnt=0;
        while(isExist[cnt]){
            cnt++;
        }
        
        cout << '#' << t << ' ' << cnt << '\n';        
    }

    return 0;
}
