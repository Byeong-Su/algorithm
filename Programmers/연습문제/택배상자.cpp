#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    int answer = 0, pos=0;
    stack<int> st;
    for(int i=1; i<=order.size(); i++){
        //1~n까지 상자를 스택에 삽입
        st.push(i);
        //스택의 상단과 현재 실어야 하는 상자가 일치하는지 확인
        while( !st.empty() && (st.top()==order[pos]) ){
		//스택 삭제
            st.pop();
		//탐색위치, 실은 상자 개수 증가
            pos++;
            answer++;
        }
    }
    return answer;
}