//승률 비교하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWIX_iFqjg4DFAVH&categoryId=AWIX_iFqjg4DFAVH&categoryType=CODE&problemTitle=3975&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    double A,B,C,D, ALICE, BOB;
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> A >> B >> C >> D;
        ALICE=A/B; BOB=C/D;
        
        cout << '#' << t << ' ';
        if(ALICE>BOB){ cout << "ALICE"; }
        else if(ALICE<BOB){ cout << "BOB"; }
        else{ cout << "DRAW"; }
        //출력
        cout << '\n';
    }

    return 0;
}