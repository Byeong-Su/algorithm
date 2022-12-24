#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left, right, mid, cnt;
    
    //이분탐색을 위해 정렬
    sort(times.begin(), times.end());

    //가장 빨리 끝나는 경우가 (최소 소요시간의 심사관*1)이므로
    left = times.front();
    //가장 늦게 끝나는 경우가 (최대 소요시간의 심사관*n)이므로
    right = times.back()*n;

    while(left <= right) {
        //중앙값 계산
        mid = (left + right) / 2;
        //심사 가능한 사람의 수 초기화
        cnt = 0;
        //모든 심사관들의 mid시간 동안 심사한 사람의 수 계산
        for(int i = 0; i < times.size(); i++) {
            cnt += mid / times[i];
        }

        //심사한 사람 수가 n보다 적으면 mid기준 우측범위 탐색
        if(cnt < n) {
            left = mid + 1;
        }
        //심사한 사람 수가 n보다 크거나 같으면
        else {
            //mid가 left값 이하면 최소값이 될 수 있으므로 answer에 삽입
            if(mid <= right) {
                answer = mid;
            }
            //mid기준 좌측범위 탐색
            right = mid - 1;
        }
    }

    return answer;
}

/*
이진검색 - 리스트의 중간값을 찾아서 검색범위를 반씩 나누어 가며 원하는 방법을 찾는것

전제조건 - 리스트가 정렬되어있어야함

ex. 이진검색으로 숫자 77찾기

1. 중간값 찾기 (최소 인덱스 값+최대 인덱스 값 /2 ) (소수점 이하는 버림)
2. 중간값을 찾으면 그 위치에 해당하는 값과 검색하려는 값 비교
8 12 20 31 59 77 79 81 99 100
에서 중간값은 인덱스 5인 59이므로 중간값인 59와 77을 비교,
이미 정렬되어있으므로 59 이하는 77보다 작음 그러므로 1~5범위는 검색해볼 필요 없고 남아있는 범위인 6~10번째만 비교해보면됨

다시 중간값 찾기 (최소인덱스 6~ 최대 인덱스 10 / 2)
중간값 찾아서 비교할려는 숫자인 77과 비교
이미 정렬되어있고 81 이상은 77보다 크므로 8~10 범위는 검색해볼 필요없고 남아있는 범위인 6~7만 비교하면 됨

다시 중간값 찾기 (최소인덱스 6 최대인덱스 7
중간값 찾아서 비교할려는 숫자인 77과 비교
찾으려는 숫자인 77찾았으므로 종료


반복할때마다 검색범위를 반씩 줄여감, 하나씩 검색하는 선형검색보다 더 빠르게 원하는 값 찾을 수 있음
O(logN)의 값이 소모되므로, 선형검색으로 배열을 전수 조사 하는 O(N)의 시간보다 빠름
*/