//백만 장자 프로젝트
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1&&&&&&&&&&
//증가하는 부분수열 활용
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T,N,profit,max;    //테스트케이스, 일 수, 이익금, 증가하는 수열별 최대 합
    int price[1000001];     //가격배열
    vector<int> v;  //증가하는 부분수열
    cin >> T;

    for(int t=1; t<=T; t++){
        cin >> N;
        profit=0;
        for(int i=0; i<N; i++){
            cin>> price[i];
        }
        v.push_back(price[0]);
        for(int i=1; i<N; i++){
            if(price[i])
        }
    }
}