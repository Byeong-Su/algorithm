//구구단1
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXkcWgFa8sADFAS8&categoryId=AXkcWgFa8sADFAS8&categoryType=CODE&problemTitle=%EA%B5%AC%EA%B5%AC%EB%8B%A8&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
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