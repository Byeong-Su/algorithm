#include <iostream>
#include <deque>

using namespace std;

int main()
{
    //front와 back 삽입 삭제 가능한 deque활용
    deque<int> dq;
    
    int n;
    for(int i=0; i<3; i++){
        cin >> n;
        
        //첫 입력인 경우    
        if(dq.empty()){ dq.push_back(n); }
        //두 번째 부터의 입력인 경우
        else{
            //작은값 입력
            if(dq.front() > n){ dq.push_front(n); }
            //큰값 입력
            else if(dq.back() <= n){ dq.push_back(n); }
            //중간값 입력
            else{ cout << n; return 0; }
        }
    }
    
    dq.pop_back();
    cout << dq.back();

    return 0;
}
