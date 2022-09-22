#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> stack;
    
    for(int i=0; i<s.size(); i++){
        //짝 맞는 괄호 모양인 () 상태가 되면 ')'를 스택에 삽입하지 않고 스택에 있는 '('를 삭제
        if( !stack.empty() && stack.top()=='(' && s[i]==')' ){ stack.pop(); }
        //짝 안맞거나 스택이 비어있으면 스택에 삽입
        else{ stack.push(s[i]); }
    }
    
    //스택에 요소가 남아있으면 짝이 안맞은 것이므로 결과 false 처리
    if( !stack.empty() ){ answer=false; }

    return answer;
}