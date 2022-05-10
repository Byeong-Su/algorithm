//최빈수 구하기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV13zo1KAAACFAYh&categoryId=AV13zo1KAAACFAYh&categoryType=CODE&problemTitle=&orderBy=FIRST_REG_DATETIME&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=3
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,t_num,grade;      //테스트케이스 수, 테스트케이스 번호, 성적
    int max_value, max_cnt; //최빈출값, 최빈출카운트
    cin >> T;
    for(int t=1; t<=T; t++){
        cin >> t_num;
        max_value=0, max_cnt=0;
        int arr[1000]={0};
        //성적입력 및 해당성적 cnt++
        for(int i=0; i<1000; i++){
            cin >> grade;
            arr[grade]++;            
        }
        //최빈값 찾기(같은 최빈값이면 더 높은점수로)
        for(int i=0; i<1000; i++){
            if(arr[i]>=max_cnt){ max_cnt=arr[i]; max_value=i; }
        }
        //출력
        cout << '#' << t << ' ' << max_value << '\n';
    }

    return 0;
}