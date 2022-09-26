#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0, size = nums.size()/2;
    
    //nums 벡터 정렬
    sort(nums.begin(), nums.end());
    //unique와 erase를 이용해 nums 벡터에서 중복 제거
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    //중복제거된 벡터 크기가 N/2보다 크면 최대 선택가능 폰켓몬 수보다 많이 고르는 것이므로 최대 선택 가능 폰켓몬 수인 N/2를 반환
    if(nums.size()>size){ return size; }
    else{ return nums.size(); }
    
    //return answer;
}