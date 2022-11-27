#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int,int> left;
    unordered_map<int,int> right;
    
    //오른쪽 맵에 전체 값 삽입
    for(int i=0; i<topping.size(); i++){
        //right 맵에 topping[i] 키가 존재하는지 확인
        auto it = right.find(topping[i]);
        //키 있음
        if (it != right.end()) {
		//topping[i] 키에 대한 맵 값 증가
            it->second++;
        }
        //키 없음
        else {
		//키와 값 삽입
            right.insert(make_pair(topping[i], 1));
        }   
    }
    
    //인덱스 하나씩 증가시키며 오른쪽맵에 들어간 값을 왼쪽 맵으로 하나씩 옮기기
    for(int i=0; i<topping.size(); i++){
	//right 맵에서 값 하나 삭제
	 //right 맵에 topping[i] 키 위치 확인
        auto right_it = right.find(topping[i]);
	//값이 1인경우(하나만 존재하는 경우)
        if (right_it->second == 1) {
		//키와 값 전체 삭제
            right.erase(right_it);
        }
	//값이 2이상인경우(여러개 존재)
	else{
		//한개만 삭제
		right_it->second--;
	}

	//left 맵 값 하나 추가
	//left 맵에 topping[i] 키가 존재하는지 확인
        auto left_it = left.find(topping[i]);
	 //키 있음
       if(left_it != left.end()){
		//topping[i] 키에 대한 맵 값 증가
		left_it->second++;
	}
	//키 없음
	else{
		//키와 값 삽입
		left.insert(make_pair(topping[i],1));
	}
    
    if(left.size()==right.size()){ answer++; }
    }
    return answer;
}