//백만 장자 프로젝트
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1&&&&&&&&&&
//증가하는 부분수열 활용
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T;          //테스트케이스
    cin >> T;

    for(int t=1; t<=T; t++){
        long long profit=0;     //이익금
        int N,max=0;            //일 수, 최대 값
        vector<int> v;          //가격벡터

        cin >> N;
        for(int i=0; i<N; i++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        //역순으로 찾기
        //맨 뒤의 값 최대값으로
        max=v[v.size() - 1];
        for(int i=v.size() - 2; i>=0; i--){
            //현재 최대값보다 큰값 나오면 갱신
            if(max < v[i]){
                max = v[i];
            }
            //현재 최대값보다 작은값 나오면 이익에 합산
            profit += max-v[i];
        }
        cout << '#' << t << ' ' << profit << '\n';
    }
}