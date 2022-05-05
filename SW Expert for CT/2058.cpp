//자릿수 더하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=1&contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=1&pageSize=10&pageIndex=1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;          //테스트 케이스
    int num, max; //입력 수, 최대 값
    cin >> N;
    vector<int> v;  //입력 수 저장용 벡터
    for(int i=0; i<N; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << v[N/2];
    return 0;
}