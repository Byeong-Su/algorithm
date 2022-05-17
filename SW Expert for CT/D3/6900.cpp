//주혁이의 복권 당첨
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWh4FhG6Ei4DFAXp&categoryId=AWh4FhG6Ei4DFAXp&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=9
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,M;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        bool isMatch;
        int res=0;
        cin >> N >> M;
        
        vector<pair<string, int>> lotto;
        string number[M];

        //입력
        string inNum; int inMoney;
        for(int i=0; i<N; i++){
            cin >> inNum >> inMoney;
            lotto.push_back(make_pair(inNum,inMoney));
        }
        for(int i=0; i<M; i++){
            cin >> number[i];
        }

        //매칭 확인
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                isMatch=true;
                for(int k=0; k<8; k++){
                    //cout << lotto[i].first[k] << ' ' << number[j][k] << endl;
                    if(lotto[i].first[k]!='*' && lotto[i].first[k]!=number[j][k]){ isMatch=false; }
                }
                if(isMatch){ res+=lotto[i].second; /*break;*/ }//break하면 당첨복권 2장 산 경우 밑에것이 무시됨
            }
        }

        
        
        //출력
        cout << '#' << t << ' ' << res << '\n';
    }

    return 0;
}