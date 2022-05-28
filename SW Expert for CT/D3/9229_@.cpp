//한빈이와 Spot Mart
//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AW8Wj7cqbY0DFAXN
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;      //테스트케이스 수
    int N,M,num;    //과자봉지 개수, 무게 합 제한,입력 숫자
    cin >> T;
    for(int t=1; t<=T; t++){        
        vector<int> gram;//과자봉지별 무게
        //입력
        cin >> N >> M;
        for(int i=0; i<N; i++){
            cin >> num;
            gram.push_back(num);
        }
        //무게합 초기화
        int max=-1;
        //최대 무게합 찾기
        int left=0;
        int right=N-1;
        //정렬
        sort(gram.begin(), gram.end());
        //탐색(브루드포스보다 더 효율적인 방법)
        while(left != right){
            int sum = gram[left]+gram[right];
            if(sum>M){ right--; }
            else if(sum<M){
                if(sum > max){ max=sum; }
                left++;
            }
            //sum==M인 경우
            else{
                max=sum;
                break;
            }
        }
        
        //출력
        cout << '#' << t << ' ' << max << '\n';
    }

    return 0;
}