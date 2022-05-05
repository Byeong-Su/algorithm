//서랍의 비밀번호
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QJ_8KAx8DFAUq&categoryId=AV5QJ_8KAx8DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=2
#include <iostream>

using namespace std;

int main(){
    int P,K,cnt=0;    //비밀번호, 주어지는 번호, 맞추는 카운트
    cin >> P >> K;

    //키~비밀번호까지 카운트 하나씩 증가
    for(int i=K; i<=P; i++){ cnt++; }

    cout << cnt;

    return 0;
}