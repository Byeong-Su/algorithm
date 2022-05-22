//문자열 교집합
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV-Un3G64SUDFAXr
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,M;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        string str;
        cin >> N >> M;
        int arr[26]={0};
        for(int i=0; i<N; i++){
            cin >> str;
            for(int j=0; j<str.size(); j++){
                arr[str[i]-'a']=1;
            }
        }
        for(int i=0; i<M; i++){
            cin >> str;
            for(int j=0; j<str.size(); j++){
                arr[str[i]-'a']++;
            }
        }
        for(int i=0; i<26; i++){
            cout << arr[i];
        }
        //출력
        //cout << '#' << t << ' ' << 1 << '\n';
    }

    return 0;
}