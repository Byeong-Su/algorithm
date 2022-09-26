#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    //phone_book 벡터 정렬
    sort(phone_book.begin(), phone_book.end());
    
    //전화번호 1개만 있는 경우 phone_book.size()-1이 0 이므로 for문이 돌지 않기 때문에 정상적으로 true 반환
    //i와 i+1 비교하므로 벡터 크기 -1까지 비교해줘야 segmentation fault 안남 
    for(int i=0; i<phone_book.size()-1; i++){
        //첫 문자가 같은 경우 false 반환하고 종료
        if(phone_book[i]==phone_book[i+1].substr(0,phone_book[i].size())){ return false; }
    }
    return answer;
}