//회문
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AV14QpAaAAwCFAYi&categoryId=AV14QpAaAAwCFAYi&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//!!! 입력이 string이고
//가로방향 세로방향 한 for문 안에서 탐색할꺼면 arr[i][j]했던거 arr[j][i]해줘야함
#include <iostream>
#include<string>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,cnt;
    //문자열에서 입력받으므로 배열 char형 해줘야함
    char arr[8][8];
    string str;
    bool isSame;

    for(int t=1; t<=10; t++){
        cnt=0;
        //입력
        cin >> N;
        getline(cin, str); 
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }

        //탐색
        for(int i=0; i<8; i++){
            for(int j=0; j<=8-N; j++){
                //가로 탐색
                isSame=true;
                for(int k=0; k<N/2; k++){
                    if(arr[i][j+k]!=arr[i][j+(N-1)-k]){ isSame=false; }
                }
                if(isSame){ cnt++; }

                //세로탐색
                isSame=true;
                for(int k=0; k<N/2; k++){
                    if(arr[j+k][i]!=arr[j+(N-1)-k][i]){ isSame=false; }
                }
                if(isSame){ cnt++; }
            }
        }

        //출력
        cout << '#' << t << ' ' << cnt << '\n';
    }

    return 0;
}