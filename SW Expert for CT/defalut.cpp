//
//
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        
        //출력
        cout << '#' << t << ' ' << 1 << '\n';
    }

    return 0;
}