//구구단1
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AXkcWgFa8sADFAS8&categoryId=AXkcWgFa8sADFAS8&categoryType=CODE&problemTitle=%EA%B5%AC%EA%B5%AC%EB%8B%A8&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N,cnt;      //테스트케이스 수, 10미만의 약수이면서 나눠지는 수도 10이하인거 카운트
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> N;
        cnt=0;
        for(int i=1; i<10; i++){
            if( ((N%i)==0) && ((N/i)<10) ){ cnt++; }
        }
        //출력
        if(cnt>0){ cout << '#' << t << ' ' << "Yes" << '\n'; }
        else{ cout << '#' << t << ' ' << "No" << '\n'; }
    }

    return 0;
}