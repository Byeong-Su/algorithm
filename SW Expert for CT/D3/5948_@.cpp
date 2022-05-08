//새샘이의 7-3-5 게임
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWZ2IErKCwUDFAUQ&categoryId=AWZ2IErKCwUDFAUQ&categoryType=CODE&problemTitle=5948&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=1
//수 중 5번째로 큰 수이므로 5번 앞의 수는 중복인것 제거해줘야함
//memoization활용해 중복확인으로 제거
//!!! 10000개중 9980개만 풀리다가 입출력 빠르게 하니까 풀림
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,sum;    //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        //정수 배열
        int arr[7];
        //정수배열 입력
        for(int i=0; i<7; i++){
            cin >> arr[i];
        }
        //3개의 합 저장 벡터
        vector<int> v;
        //중복제거 위해 메모이제이션 활용
        bool memo[301]={false};
        //3개의 합 계산 해 벡터에 저장
        for(int i=0; i<5; i++){
            for(int j=i+1; j<6; j++){
                for(int k=j+1; k<7; k++){
                    //중복아니라 memo배열에 체크안되어있으면 삽입
                    if(!memo[arr[i]+arr[j]+arr[k]]){
                        v.push_back(arr[i]+arr[j]+arr[k]);
                        memo[arr[i]+arr[j]+arr[k]]=true;
                    }
                }
            }
        }
        //내림차순 정렬
        sort(v.begin(), v.end(), greater<>());
        //출력
        cout << '#' << t << ' ' << v[4] << '\n';
    }

    return 0;
}