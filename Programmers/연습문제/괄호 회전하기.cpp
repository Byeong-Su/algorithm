#include <string>
#include <vector>
#include <stack>

using namespace std;

int is_correct(string s){
    stack<char> st;
    
    for(int i=0; i<s.size(); i++){
        if(s.empty()==true){ st.push(s[i]); }
        else if( (st.top()=='(')&&(s[i]==')') ){ st.pop(); }
        else if( (st.top()=='[')&&(s[i]==']') ){ st.pop(); }
        else if( (st.top()=='{')&&(s[i]=='}') ){ st.pop(); }
        else{ st.push(s[i]); }
    }
    
    if(st.empty()==true){ return 1; }
    else { return 0; }
}

int solution(string s) {
    int answer = 0;
    
    for(int i=0; i<s.size(); i++){
        //문자열 회전
        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
        //올바른 괄호 문자열인지 확인
        answer+=is_correct(s);
    }
    
    return answer;
}