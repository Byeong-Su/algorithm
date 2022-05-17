//최대 성적표 만들기
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=3&contestProbId=AWOUfCJ6qVMDFAWg&categoryId=AWOUfCJ6qVMDFAWg&categoryType=CODE&problemTitle=&orderBy=PASS_RATE&selectCodeLang=ALL&select-1=3&pageSize=10&pageIndex=5
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, K;      //테스트케이스 수, 성적 개수, 최대 선택 가능 성적 개수
    int max, sum;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        //입력
        cin >> N >> K;
        int grade[N];
        for (int i = 0; i < N; i++) {
            cin >> grade[i];
        }
        //최대값 초기화
        max = 0;
        //정렬
        sort(grade, grade + N, greater<int>());
        for (int i = 0; i < N; i++) {
            //구간합 초기화
            sum = 0;
            //구간합 구하기
            for (int j = i; j < K; j++) {
                sum += grade[j];
            }
            //최대값 갱신
            if (sum > max) { max = sum; }
        }
        //출력
        cout << '#' << t << ' ' << max << '\n';
    }

    return 0;
}