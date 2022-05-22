//정곤이의 단조 증가하는 수
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWcPjEuKAFgDFAU4
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T,N;      //테스트케이스 수
    cin >> T;
    for(int t=1; t<=T; t++){
        int max=0;
        //입력
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++){
            cin >> arr[i];
            if(i>0 && arr[i-1]<arr[i] && arr[i-1]*arr[i]>max){
                max=arr[i-1]*arr[i];
            }
            
        }

        //출력
        if(max!=0){ cout << '#' << t << ' ' << max << '\n'; }
        else{ cout << '#' << t << ' ' << -1 << '\n'; }
    }

    return 0;
}