//아름이의 돌 던지기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV18-stqI8oCFAZN&categoryId=AV18-stqI8oCFAZN&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수, 사람 수
    int dis, min, cnt;   //최소거리 값, 최소거리, 최소거리 카운트
    cin >> T;
    for(int t=1; t<=T; t++){
        //입력
        cin >> N;
        int arr[N];
        //최소거리, 최소거리 카운트 초기화
        min=100001, cnt=0;
        for(int i=0; i<N; i++){
            cin >> arr[i];
            if(abs(arr[i])<min){ dis=abs(arr[i]); min=abs(arr[i]); cnt=1; }
            else if(abs(arr[i])==min) { cnt++; }
        }
        //출력
        cout << '#' << t << ' ' << dis << ' ' << cnt << '\n';
    }

    return 0;
}