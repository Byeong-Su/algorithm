#include <string>
#include <vector>

using namespace std;

//던지는 횟수, 싱글or불의 개수
int dp[100001][2];

void minimum(int target) {

    //가장 큰수인 60, 그 다음으로 가장 큰 수인 50을 제외한게 같다면 불인게 조으므로 50을 선택
    if (dp[target - 60][0] == dp[target - 50][0]) {
        dp[target][0] = dp[target - 50][0] + 1;
        dp[target][1] = max(dp[target - 60][1], dp[target - 50][1] + 1);
    }
    //60을 제한것이 횟수가 적다면 60을 제함
    else if (dp[target - 60][0] < dp[target - 50][0]) {
        dp[target][0] = dp[target - 60][0] + 1;
        dp[target][1] = dp[target - 60][1];
    }
    //50을 제한것이 횟수가 적다면 50을 제함
    else {
        dp[target][0] = dp[target - 50][0] + 1;
        dp[target][1] = dp[target - 50][1] + 1;
    }
}

vector<int> solution(int target) {
    vector<int> answer(2, 0);

    //target까지의 모든 수에 대해 불과 싱글을 최대한으로 하는 최소 다트수 저장
    for (int i = 1; i <= target; i++) {
        // 싱글 또는 불로 한번에 끝내기
        if (i == 50 || i <= 20) {
            dp[i][0] = 1;
            dp[i][1] = 1;
        }
        //60 이하의 3의 배수인 경우 또는 40이하인 2의 배수
        else if ((i <= 60 && i % 3 == 0)||(i <= 40 && i % 2 == 0)) {
            //트리플 혹은 더블로 한번에 끝내기
            dp[i][0] = 1;
            dp[i][1] = 0;
        }
        // 50보다 크고 70 이하
        else if (i > 50 && i <= 70) {
            //볼+싱글인 2번
            dp[i][0] = 2;
            dp[i][1] = 2;
        }
        //나머지 70보다 작은 수들
        else if (i < 70) {
            //40 보다 작은 수
            if (i < 40) {
                //싱글 2번이
                dp[i][0] = 2;
                dp[i][1] = 2;
            }
            //40이상인 수
            else {
                //더블 1번 싱글 1번이
                dp[i][0] = 2;
                dp[i][1] = 1;
            }
        }
         //70보다 큰 경우 1~3의 경우의 수들을 조합해 최적을 구함
        else {
            minimum(i);
        }
    }

    answer[0] = dp[target][0];
    answer[1] = dp[target][1];

    return answer;
}