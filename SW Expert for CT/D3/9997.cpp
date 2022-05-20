//미니멀리즘 시계
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXIvNBzKapEDFAXR&categoryId=AXIvNBzKapEDFAXR&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=2#none
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,angle;      //테스트케이스 수
    int hour,min;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> angle;
        hour=(angle*2)/60;
        min=(angle*2)%60;

        //출력
        cout << '#' << t << ' ' << hour << ' ' << min << '\n';
    }

    return 0;
}