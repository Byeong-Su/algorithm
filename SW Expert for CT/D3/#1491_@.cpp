//원재의 벽 꾸미기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV2b9AkKACkBBASw
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,A,B;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N >> A >> B;
        //출력
        cout << '#' << t << ' ' << 1 << '\n';
    }

    return 0;
}